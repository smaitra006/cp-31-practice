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

vi parent;
vi sz;

int find_set(int u)
{
  if (u == parent[u])
  {
    return u;
  }
  return parent[u] = find_set(parent[u]);
}

void unite_sets(int u, int v)
{
  int root_u = find_set(u);
  int root_v = find_set(v);
  if (root_u != root_v)
  {
    parent[root_u] = root_v;
    sz[root_v] += sz[root_u];
    sz[root_u] = 0;
  }
}

void solve()
{
  int n, q;
  cin >> n >> q;
  parent.resize(n + 1);
  iota(parent.begin(), parent.end(), 0);
  sz.assign(n + 1, 1);
  sz[0] = 0;
  int current_version = 1;
  while (q--)
  {
    int x, y;
    cin >> x >> y;
    ll upgraded_count = 0;
    int root_y = find_set(y);
    for (int v = current_version; v <= x; ++v)
    {
      int root_v = find_set(v);
      if (root_v != root_y)
      {
        upgraded_count += sz[root_v];
        unite_sets(v, y);
      }
    }
    cout << upgraded_count << "\n";
    current_version = max(current_version, x + 1);
  }
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
