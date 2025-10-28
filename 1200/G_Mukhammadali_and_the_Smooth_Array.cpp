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
  cin >> n;
  vi a(n), c(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];
  for (int i = 0; i < n; ++i)
    cin >> c[i];
  vi pc(n + 1, 0);
  for (int i = 0; i < n; ++i)
  {
    pc[i + 1] = pc[i] + c[i];
  }
  vi dp(n);
  ll ans = pc[n];
  for (int i = 0; i < n; ++i)
  {
    dp[i] = pc[i];
    for (int j = 0; j < i; ++j)
    {
      if (a[j] <= a[i])
      {
        ll cost = dp[j] + (pc[i] - pc[j + 1]);
        dp[i] = min(dp[i], cost);
      }
    }
    ll cost_after = pc[n] - pc[i + 1];
    ans = min(ans, dp[i] + cost_after);
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
