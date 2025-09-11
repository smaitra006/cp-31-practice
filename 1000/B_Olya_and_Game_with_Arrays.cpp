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
  int n;
  cin >> n;

  int minn = INF;
  vi min2;
  for (int i = 0; i < n; i++)
  {
    int m;
    cin >> m;
    vector<int> v(m);
    for (auto &el : v)
      cin >> el;
    int minel = *min_element(all(v));
    minn = min(minn, minel);
    v.erase(find(all(v), minel));
    min2.push_back(*min_element(all(v)));
  }
  cout << minn + (int)accumulate(all(min2), 0ll) - *min_element(all(min2)) << "\n";
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
