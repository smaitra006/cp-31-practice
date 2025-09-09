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

int dpp(vi a, int prod, int k, int i, int cnt, int n)
{
  if (prod % k == 0 || i >= n)
    return cnt;
  prod /= a[i];
  int inc_same = dpp(a, prod * (a[i] + 1), k, i, cnt + 1, n);
  int inc_next = dpp(a, prod * (a[i] + 1), k, i + 1, cnt + 1, n);
  int inc_notme = dpp(a, prod * a[i], k, i + 1, cnt, n);
  return min({inc_same, inc_next, inc_notme});
}

void solve()
{
  // Your logic here
  int n, k;
  cin >> n >> k;
  vi a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  if (k != 4)
  {
    int min_ops = k;
    for (int x : a)
    {
      min_ops = min(min_ops, (k - x % k) % k);
    }
    cout << min_ops << endl;
    return;
  }
  int even_count = 0;
  int min_ops4 = 4;
  for (int x : a)
  {
    if (x % 2 == 0)
    {
      even_count++;
    }
    min_ops4 = min(min_ops4, (4 - x % 4) % 4);
  }
  int ops4 = max(0LL, 2 - even_count);
  cout << min(min_ops4, ops4) << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
