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

const int xn = 2e5 + 10;
int qq, n, m, a[xn], b[xn];
bool ans;

void check(int x)
{
  m = 0;
  for (int i = 1; i <= n; ++i)
    if (a[i] != x)
      b[++m] = a[i];
  for (int i = 1; i <= m; ++i)
    if (b[i] != b[m + 1 - i])
      return;
  ans = true;
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  cin >> n, ans = true;
  for (int i = 1; i <= n; ++i)
    cin >> a[i];
  for (int i = 1; i <= n; ++i)
  {
    if (a[i] != a[n + 1 - i])
    {
      ans = false;
      check(a[i]);
      check(a[n + 1 - i]);
      break;
    }
  }
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
