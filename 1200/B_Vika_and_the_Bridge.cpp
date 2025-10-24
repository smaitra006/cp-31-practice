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
  int n, k;
  cin >> n >> k;
  vi c(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> c[i];
  }
  vi last(k, -1);
  vi max_step(k), max2_step(k);
  for (int i = 0; i < n; ++i)
  {
    int step = i - last[c[i] - 1];
    if (step > max_step[c[i] - 1])
    {
      max2_step[c[i] - 1] = max_step[c[i] - 1];
      max_step[c[i] - 1] = step;
    }
    else if (step > max2_step[c[i] - 1])
    {
      max2_step[c[i] - 1] = step;
    }
    last[c[i] - 1] = i;
  }
  for (int i = 0; i < k; ++i)
  {
    int step = n - last[i];
    if (step > max_step[i])
    {
      max2_step[i] = max_step[i];
      max_step[i] = step;
    }
    else if (step > max2_step[i])
    {
      max2_step[i] = step;
    }
  }
  ll ans = LLONG_MAX;
  for (int i = 0; i < k; ++i)
  {
    ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
  }
  cout << ans - 1 << endl;
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
