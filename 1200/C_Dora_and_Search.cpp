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
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int l = 0, r = n - 1;
  int min_val = 1, max_val = n;
  while (l < r)
  {
    if (a[l] == min_val)
    {
      l++;
      min_val++;
    }
    else if (a[l] == max_val)
    {
      l++;
      max_val--;
    }
    else if (a[r] == min_val)
    {
      r--;
      min_val++;
    }
    else if (a[r] == max_val)
    {
      r--;
      max_val--;
    }
    else
    {
      cout << l + 1 << " " << r + 1 << endl;
      return;
    }
  }
  cout << -1 << endl;
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
