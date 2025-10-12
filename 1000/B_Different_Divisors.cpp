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

const int LIMIT = 100001;
std::vector<bool> isPrime(LIMIT, true);

void sieve()
{
  isPrime[0] = isPrime[1] = false;
  for (int p = 2; p * p < LIMIT; ++p)
  {
    if (isPrime[p])
    {
      for (int i = p * p; i < LIMIT; i += p)
      {
        isPrime[i] = false;
      }
    }
  }
}

int findNextPrime(int n)
{
  for (int i = n; i < LIMIT; ++i)
  {
    if (isPrime[i])
    {
      return i;
    }
  }
  return -1;
}

// =============================================================================
//  SOLVE FUNCTION
// =============================================================================
void solve()
{
  ll d;
  cin >> d;
  ll b = findNextPrime(1 + d), c = findNextPrime(b + d);
  ll ans = b * c;
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
  sieve();
  ll t = 1;
  cin >> t;
  while (t--)
    solve();
}
