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

ll check(ll mid, vi &a, ll n)
{
  ll y = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < mid)
      y += (mid - a[i]);
  }
  return y;
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  ll n, x;
  cin >> n >> x;
  vi a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll left = 1, right = 3000000000LL, ans = 0;
  while (left <= right)
  {
    ll mid = left + (right - left) / 2;
    ll y = check(mid, a, n);
    if (y <= x)
    {
      ans = max(ans, mid);
      left = mid + 1;
    }
    else if (y > x)
    {
      right = mid - 1;
    }
  }
  cout << ans << endl;
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
