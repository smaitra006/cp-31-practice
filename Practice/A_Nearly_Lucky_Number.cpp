// Competitive Programming Template (C++)
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define fast_io            \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e18;
typedef vector<int> vi;
typedef pair<int, int> pii;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

void solve()
{
  // Your logic here
  string s;
  if (!(cin >> s))
    return;

  int cnt = 0;
  for (char c : s)
  {
    if (c == '4' || c == '7')
      ++cnt;
  }

  if (cnt == 0)
  {
    cout << "NO\n";
    return;
  }

  string t = to_string(cnt);
  for (char c : t)
  {
    if (c != '4' && c != '7')
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int32_t main()
{
  fast_io int t = 1;
  // cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
