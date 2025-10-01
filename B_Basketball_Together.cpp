#include <bits/stdc++.h>
using namespace std;

// --- TYPE ALIASES & CONSTANTS ---
using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vvi = vector<vi>;
using pii = pair<ll, ll>;
const ll MOD = 1e9 + 7;
const ll INF = 2e18;
const int MAXN = 2e5 + 5;

// --- MACROS & UTILITIES ---
#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(NULL);               \
  cout.tie(NULL);
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(v) (ll) v.size()
#define fori(i, a, b) for (ll i = a; i < b; ++i)
#define ford(i, a, b) for (ll i = a; i >= b; --i)
#define precision(x) cout << fixed << setprecision(x)

// --- FUNCTION UTILITIES ---
ll gcd(ll a, ll b)
{
  while (b)
  {
    a %= b;
    swap(a, b);
  }
  return a;
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll power(ll base, ll exp)
{
  ll res = 1;
  base %= MOD;
  while (exp > 0)
  {
    if (exp % 2 == 1)
      res = (res * base) % MOD;
    base = (base * base) % MOD;
    exp /= 2;
  }
  return res;
}

ll modInverse(ll n)
{
  return power(n, MOD - 2);
}

// --- DEBUG MACRO ---
#ifdef LOCAL_DEBUG
#define debug(x) cerr << #x << " = " << x << endl
#else
#define debug(x)
#endif

void solve()
{
  // Your logic here
  ll n, d;
  cin >> n >> d;
  vi a(n);
  for (ll i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  sort(all(a));

  ll wins = 0;
  ll left = 0, right = n - 1;

  while (left <= right)
  {
    ll lead = a[right];
    ll step = (d / lead) + 1;
    if ((right - left + 1) >= step)
    {
      wins++;
      right--;
      left += (step - 1);
    }
    else
    {
      break;
    }
  }

  cout << wins << endl;
}

int main()
{
  fast_io
      // #ifdef LOCAL_DEBUG
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt", "w", stdout);
      // #endif

      ll t = 1;
  // cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();

  return 0;
}
