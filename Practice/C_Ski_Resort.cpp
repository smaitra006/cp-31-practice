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
  int n, k, q;
  cin >> n >> k >> q;
  vi a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int total_cnt = 0, cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] <= q)
      cnt++;
    else
    {
      if (cnt >= k)
      {
        total_cnt += ((cnt - k + 1) * (cnt - k + 2)) / 2;
      }
      cnt = 0;
    }
  }
  if (cnt >= k)
  {
    total_cnt += ((cnt - k + 1) * (cnt - k + 2)) / 2;
  }
  cout << total_cnt << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
