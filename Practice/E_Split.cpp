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
  int n, k;
  cin >> n >> k;
  vi a(n);
  vi total(n + 1, 0);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
    total[a[i]]++;
  }

  for (int i = 1; i <= n; ++i)
  {
    if (total[i] % k != 0)
    {
      cout << 0 << endl;
      return;
    }
  }

  vi target(n + 1, 0);
  for (int i = 1; i <= n; ++i)
  {
    target[i] = total[i] / k;
  }

  int aws_cnt = 0;
  vi curr(n + 1, 0);
  int l = 0;
  for (int r = 0; r < n; ++r)
  {
    int val = a[r];
    curr[val]++;

    while (curr[val] > target[val])
    {
      int left_val = a[l];
      curr[left_val]--;
      l++;
    }

    aws_cnt += (r - l + 1);
  }

  cout << aws_cnt << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
