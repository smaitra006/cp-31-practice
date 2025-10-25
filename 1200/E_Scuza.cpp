#include <bits/stdc++.h>
using namespace std;

// =============================================================================
//  TYPE ALIASES
// =============================================================================
using ll = long long;
using ld = long double;
using pii = pair<ll, ll>;
using vi = vector<ll>;
using vvi = vector<vi>;

// =============================================================================
//  CONSTANTS
// =============================================================================
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// =============================================================================
//  MACROS
// =============================================================================
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
#define pb push_back
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define sz(v) ((ll)(v).size())
#define fi first
#define se second
#define endl '\n'

// =============================================================================
//  UTILITY FUNCTIONS
// =============================================================================
inline ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

inline ll power(ll base, ll exp, ll mod = MOD)
{
  ll res = 1;
  base %= mod;
  while (exp > 0)
  {
    if (exp & 1)
      res = (res * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return res;
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  ll n, m;
  cin >> n >> m;
  vi a(n), q(m);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> q[i];
  vi prefix_sum(n);
  prefix_sum[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }
  vi max_a(n);
  max_a[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] > max_a[i - 1])
      max_a[i] = a[i];
    else
      max_a[i] = max_a[i - 1];
  }
  vi ans(m);
  for (int i = 0; i < m; i++)
  {
    ll max_height = 0;
    ll left = 0, right = n - 1;
    while (left <= right)
    {
      ll mid = left + ((right - left) / 2);
      if (max_a[mid] <= q[i])
      {
        max_height = max(max_height, prefix_sum[mid]);
        left = mid + 1;
      }
      else
        right = mid - 1;
    }
    ans[i] = max_height;
  }
  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << endl;
}

// =============================================================================
//  MAIN FUNCTION
// =============================================================================
int main()
{
  fast_io;
  // #ifdef LOCAL
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  // #endif

  ll t = 1;
  cin >> t;
  while (t--)
    solve();
}
