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
  vi b(n);
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  unordered_map<int, vi> mp;
  for (int i = 0; i < n; i++)
  {
    mp[b[i]].push_back(i);
  }
  vi a(n, 0);
  int cur = 1;
  bool ok = true;
  for (auto &p : mp)
  {
    int k = p.first;
    if ((int)p.second.size() % k != 0)
    {
      ok = false;
      break;
    }
    for (int i = 0; i < (int)p.second.size(); i += k)
    {
      for (int j = 0; j < k; j++)
      {
        a[p.second[i + j]] = cur;
      }
      cur++;
    }
  }
  if (!ok)
  {
    cout << -1 << endl;
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
