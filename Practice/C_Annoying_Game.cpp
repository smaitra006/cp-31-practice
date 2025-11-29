#include <bits/stdc++.h>
using namespace std;

// =============================================================================
//  TYPE ALIASES
// =============================================================================
using ll = long long;
using ld = long double;
using pii = pair<long long, long long>;
using vi = vector<long long>;
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

ll kadane(int n, vector<ll> &a)
{
  ll mx = -2e18, curr = -2e18;
  for (ll x : a)
  {
    if (curr < 0)
      curr = x;
    else
      curr += x;
    mx = max(mx, curr);
  }
  return mx;
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  int n;
  ll k;
  cin >> n >> k;
  vi a(n), b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  if (k % 2 == 0)
  {
    cout << kadane(n, a) << endl;
    return;
  }
  vi p(n);
  p[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    p[i] = p[i - 1] + a[i];
  }
  vi suf(n);
  suf[n - 1] = p[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = max(suf[i + 1], p[i]);
  }
  ll ans = LONG_LONG_MIN;
  ll mn_pre = 0;
  for (int i = 0; i < n; i++)
  {
    ans = max(ans, suf[i] - mn_pre + b[i]);
    mn_pre = min(mn_pre, p[i]);
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
