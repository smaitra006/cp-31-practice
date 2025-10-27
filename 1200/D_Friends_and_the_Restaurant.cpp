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

bool comparePairs(const std::pair<int, int> &a, const std::pair<int, int> &b)
{
  if (a.first != b.first)
  {
    return (a.second - a.first) > (b.second - b.first);
  }
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  int n;
  cin >> n;
  vi a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];
  vi c(n);
  for (int i = 0; i < n; i++)
  {
    c[i] = b[i] - a[i];
  }
  sort(all(c), greater<ll>());
  ll cnt = 0;
  int l = 0, r = n - 1;
  while (l < r)
  {
    if (c[l] > -1 && c[r] > -1)
    {
      cnt++;
      l++;
      r--;
    }
    else if (c[l] < 0 && c[r] < 0)
    {
      break;
    }
    else if (c[l] > -1)
    {
      if (c[l] >= abs(c[r]))
      {
        cnt++;
        l++;
        r--;
      }
      else
      {
        r--;
      }
    }
  }
  cout << cnt << endl;
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
