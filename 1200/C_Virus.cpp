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
  vector<ll> a(m);
  for (auto &x : a)
    cin >> x;
  sort(a.begin(), a.end());

  vector<ll> gaps;
  for (int i = 0; i < m - 1; i++)
    gaps.push_back(a[i + 1] - a[i] - 1);
  gaps.push_back((n - a[m - 1]) + (a[0] - 1));

  sort(gaps.rbegin(), gaps.rend());

  ll days = 0, saved = 0;
  for (ll g : gaps)
  {
    ll remaining = g - 2 * days;
    if (remaining <= 0)
      continue;
    if (remaining == 1)
    {
      saved += 1;
      days += 1;
    }
    else
    {
      saved += remaining - 1;
      days += 2;
    }
  }

  cout << n - saved << endl;
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
