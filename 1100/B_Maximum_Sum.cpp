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
  int n;
  int k;
  cin >> n >> k;
  vi a(n);
  ll total_sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    total_sum += a[i];
  }
  sort(all(a));
  vi prefix_sum(n + 1, 0);
  for (int i = 0; i < n; ++i)
  {
    prefix_sum[i + 1] = prefix_sum[i] + a[i];
  }
  vi suffix_sum(n + 1, 0);
  for (int i = n - 1; i >= 0; --i)
  {
    suffix_sum[i] = suffix_sum[i + 1] + a[i];
  }
  ll min_sum = -1;
  for (int i = 0; i <= k; ++i)
  {
    ll sum = prefix_sum[2 * i] + suffix_sum[n - (k - i)];
    if (min_sum == -1 || sum < min_sum)
    {
      min_sum = sum;
    }
  }
  cout << total_sum - min_sum << endl;
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
