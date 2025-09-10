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
  int n, p;
  cin >> n >> p;
  vector<pair<int, int>> v(n);
  vector<int> a(n), b(n);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
    v[i] = {b[i], a[i]};

  sort(v.begin(), v.end());

  int minimum_cost = p;
  int already_shared = 1;

  for (auto it : v)
  {
    int can_be_shared = it.second;
    int sharing_cost = it.first;

    if (sharing_cost >= p)
      break;

    if (already_shared + can_be_shared > n)
    {
      minimum_cost += (n - already_shared) * sharing_cost;
      already_shared = n;
      break;
    }
    else
    {
      minimum_cost += can_be_shared * sharing_cost;
      already_shared += can_be_shared;
    }
  }

  minimum_cost += (n - already_shared) * p;
  cout << minimum_cost << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
