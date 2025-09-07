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
  long long a, b;
  cin >> a >> b;
  long long bb = b;
  int tw = 0;
  while (bb % 2 == 0)
  {
    bb /= 2;
    tw++;
  }
  if (tw == 0)
  {
    if (a % 2 == 1)
      cout << (a * b + 1) << endl;
    else
      cout << -1 << endl;
    return;
  }
  if ((a % 2 == 1) && (tw == 1))
  {
    cout << -1 << endl;
    return;
  }
  long long ans = -1;
  if (((a + b) & 1) == 0)
    ans = max(ans, a + b);
  long long v = a * (b / 2) + 2;
  if ((v & 1) == 0)
    ans = max(ans, v);
  cout << ans << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
