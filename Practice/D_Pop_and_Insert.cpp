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

struct Block
{
  char type;
  ll len;
};

vvi memo;
ll solve_dp(int l, int r, const vector<Block> &blocks, char target_char)
{
  if (l > r)
  {
    return 0;
  }
  if (l == r)
  {
    return (blocks[l].type == target_char) ? 0 : blocks[l].len;
  }
  if (memo[l][r] != -1)
  {
    return memo[l][r];
  }
  ll cost = -1;
  int first_bad = -1, last_bad = -1;
  for (int i = l; i <= r; ++i)
  {
    if (blocks[i].type != target_char)
    {
      if (first_bad == -1)
      {
        first_bad = i;
      }
      last_bad = i;
    }
  }
  if (first_bad == -1)
  {
    cost = 0;
  }
  else
  {
    ll cost_left = 0;
    for (int i = l; i <= first_bad; ++i)
    {
      cost_left += blocks[i].len;
    }
    cost_left += solve_dp(first_bad + 1, r, blocks, target_char);
    ll cost_right = 0;
    for (int i = r; i >= last_bad; --i)
    {
      cost_right += blocks[i].len;
    }
    cost_right += solve_dp(l, last_bad - 1, blocks, target_char);

    cost = min(cost_left, cost_right);
  }
  return memo[l][r] = cost;
}

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<Block> blocks;
  if (n > 0)
  {
    blocks.push_back({s[0], 1});
    for (int i = 1; i < n; ++i)
    {
      if (s[i] == blocks.back().type)
      {
        blocks.back().len++;
      }
      else
      {
        blocks.push_back({s[i], 1});
      }
    }
  }
  if (blocks.size() <= 1)
  {
    cout << 0 << endl;
    return;
  }
  int k = blocks.size();
  memo.assign(k, vi(k, -1));
  ll cost_to_zero = solve_dp(0, k - 1, blocks, '0');
  memo.assign(k, vi(k, -1));
  ll cost_to_one = solve_dp(0, k - 1, blocks, '1');
  cout << min(cost_to_zero, cost_to_one) << endl;
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
