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
  ll second_height, first_height;
  cin >> second_height >> first_height;
  ll n1, n2, n3, n4;
  cin >> n1;
  vi a1(n1);
  for (int i = 0; i < n1; i++)
  {
    cin >> a1[i];
  }
  cin >> n2;
  vi a2(n2);
  for (int i = 0; i < n2; i++)
  {
    cin >> a2[i];
  }
  cin >> n3;
  vi a3(n3);
  for (int i = 0; i < n3; i++)
  {
    cin >> a3[i];
  }
  cin >> n4;
  vi a4(n4);
  for (int i = 0; i < n4; i++)
  {
    cin >> a4[i];
  }
  ll ans1, ans2, ans3, ans4;
  ans1 = (a1[n1 - 1] - a1[0]) * first_height;
  ans2 = (a2[n2 - 1] - a2[0]) * first_height;
  ans3 = (a3[n3 - 1] - a3[0]) * second_height;
  ans4 = (a4[n4 - 1] - a4[0]) * second_height;

  cout << max({ans1, ans2, ans3, ans4}) << endl;
}

int main()
{
  fast_io
      // #ifdef LOCAL_DEBUG
      // freopen("input.txt", "r", stdin);
      // freopen("output.txt", "w", stdout);
      // #endif

      ll t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();

  return 0;
}
