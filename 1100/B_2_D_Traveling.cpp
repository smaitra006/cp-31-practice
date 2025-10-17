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
  int n, k, a, b;
  cin >> n >> k >> a >> b;
  vector<pii> v(n);
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    v[i] = {x, y};
  }
  ll dist_a = LLONG_MAX, dist_b = LLONG_MAX, min_dist = abs((v[a - 1].first) - v[b - 1].first) + abs(v[a - 1].second - v[b - 1].second);
  if (k == 0)
  {
    cout << min_dist << endl;
    return;
  }
  if (a <= k && b <= k)
  {
    cout << 0 << endl;
    return;
  }
  if (a <= k)
    dist_a = 0;
  else
  {
    for (int i = 0; i < k; i++)
    {
      ll dist = abs(v[a - 1].first - v[i].first) + abs(v[a - 1].second - v[i].second);
      dist_a = min(dist_a, dist);
    }
  }
  if (b <= k)
    dist_b = 0;
  else
  {
    for (int i = 0; i < k; i++)
    {
      ll dist = abs(v[b - 1].first - v[i].first) + abs(v[b - 1].second - v[i].second);
      dist_b = min(dist_b, dist);
    }
  }
  min_dist = min(dist_a + dist_b, min_dist);
  cout << min_dist << endl;
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
