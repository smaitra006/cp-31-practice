#include <bits/stdc++.h>
using namespace std;

// =============================================================================
//  TYPE ALIASES
// =============================================================================
using ll = long long;
using ld = long double;
using pii = pair<long long, long long>;
using vi = vector<long long>;
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
  string s;
  cin >> s;
  int cnt = 0;
  int l = 0, r = n - 1;
  while (l <= r)
  {
    if (s[l] != s[r])
    {
      int temp1l = l, temp1r = r;
      int temp1cnt = 0, temp2cnt = 0;
      bool ok1 = true, ok2 = true;
      while (temp1l <= temp1r)
      {
        if (s[temp1l] != s[temp1r])
        {
          if (s[temp1l] == s[l])
          {
            temp1l++;
            temp1cnt++;
            continue;
          }
          if (s[temp1r] == s[l])
          {
            temp1r--;
            temp1cnt++;
            continue;
          }
          ok1 = false;
          break;
        }
        temp1l++;
        temp1r--;
      }
      int temp2l = l, temp2r = r;
      while (temp2l <= temp2r)
      {
        if (s[temp2l] != s[temp2r])
        {
          if (s[temp2l] == s[r])
          {
            temp2l++;
            temp2cnt++;
            continue;
          }
          if (s[temp2r] == s[r])
          {
            temp2r--;
            temp2cnt++;
            continue;
          }
          ok2 = false;
          break;
        }
        temp2l++;
        temp2r--;
      }
      if (ok1 && ok2)
      {
        cout << min(temp1cnt, temp2cnt) << endl;
        return;
      }
      else if (ok1)
      {
        cout << temp1cnt << endl;
        return;
      }
      else if (ok2)
      {
        cout << temp2cnt << endl;
        return;
      }
      else
      {
        cout << -1 << endl;
        return;
      }
    }
    l++;
    r--;
  }
  cout << 0 << endl;
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
