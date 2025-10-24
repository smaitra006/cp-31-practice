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
  vi a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  vi b;
  if (n > 0)
  {
    b.push_back(a[0]);
  }
  for (int i = 1; i < n; ++i)
  {
    if (a[i] != b.back())
    {
      b.push_back(a[i]);
    }
  }
  int m = b.size();
  if (m <= 2)
  {
    cout << m << endl;
    return;
  }
  int min_size = 2;
  for (int i = 1; i < m - 1; ++i)
  {
    bool inc = (b[i] > b[i - 1] && b[i] > b[i + 1]);
    bool dec = (b[i] < b[i - 1] && b[i] < b[i + 1]);

    if (inc || dec)
    {
      min_size++;
    }
  }

  cout << min_size << endl;
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
