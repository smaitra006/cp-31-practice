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
  int n, m;
  cin >> n >> m;

  vector<pii> all_reqs;
  all_reqs.push_back({0, 0});
  for (int i = 0; i < n; ++i)
  {
    int a, b;
    cin >> a >> b;
    all_reqs.push_back({a, b});
  }

  int flips = 0;
  for (int i = 1; i < all_reqs.size(); ++i)
  {
    int prev_a = all_reqs[i - 1].first;
    int prev_b = all_reqs[i - 1].second;
    int curr_a = all_reqs[i].first;
    int curr_b = all_reqs[i].second;
    if (((prev_a + prev_b) % 2) != ((curr_a + curr_b) % 2))
    {
      flips++;
    }
  }

  cout << m - flips << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
