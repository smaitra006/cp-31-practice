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
  vector<pii> a(n), b(n), c(n);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    a[i] = {x, i};
  }
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    b[i] = {x, i};
  }
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    c[i] = {x, i};
  }
  sort(all(a));
  sort(all(b));
  sort(all(c));
  ll max_sum = 0;
  for (int i = n - 1; i >= max(0, n - 3); i--)
  {
    for (int j = n - 1; j >= max(0, n - 3); j--)
    {
      for (int k = n - 1; k >= max(0, n - 3); k--)
      {
        if (a[i].second != b[j].second &&
            a[i].second != c[k].second &&
            b[j].second != c[k].second)
        {
          max_sum = max(max_sum, a[i].first + b[j].first + c[k].first);
        }
      }
    }
  }

  cout << max_sum << endl;
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
