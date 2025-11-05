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

int memo[20][2][20];
ll help(string &s, int idx, int tight, int no_zero)
{
  if (idx == (int)s.size())
    return 1;
  if (memo[idx][tight][no_zero] != -1)
    return memo[idx][tight][no_zero];
  int limit = (tight == 1) ? s[idx] - '0' : 9;
  ll ans = 0;
  for (int i = 0; i <= limit; i++)
  {
    int update_no_zero = (i != 0) ? no_zero + 1 : no_zero;
    if (update_no_zero <= 3)
      ans += help(s, idx + 1, (tight && (i == s[idx] - '0')), update_no_zero);
  }
  return memo[idx][tight][no_zero] = ans;
}

ll count_up_to(ll x)
{
  if (x < 0)
    return 0;
  string s = to_string(x);
  memset(memo, -1, sizeof(memo));
  return help(s, 0, 1, 0);
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  ll l, r;
  cin >> l >> r;
  ll rans = count_up_to(r);
  ll lans = count_up_to(l - 1);
  cout << rans - lans << endl;
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
