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

void find_max_consecutive(const vector<int> &arr, map<int, int> &max_counts)
{
  if (arr.empty())
  {
    return;
  }

  int current_count = 0;
  for (size_t i = 0; i < arr.size(); ++i)
  {
    current_count++;
    if (i == arr.size() - 1 || arr[i] != arr[i + 1])
    {
      if (max_counts.find(arr[i]) == max_counts.end() || current_count > max_counts[arr[i]])
      {
        max_counts[arr[i]] = current_count;
      }
      current_count = 0;
    }
  }
}

void solve()
{
  // Your logic here
  int n;
  cin >> n;
  vi a(n), b(n);
  map<int, int> max_counts_a;
  map<int, int> max_counts_b;

  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> b[i];
  }
  find_max_consecutive(a, max_counts_a);
  find_max_consecutive(b, max_counts_b);
  int max_len = 0;
  for (auto const &[val, count_a] : max_counts_a)
  {
    int total_count = count_a;
    if (max_counts_b.count(val))
    {
      total_count += max_counts_b[val];
    }
    max_len = max(max_len, total_count);
  }
  for (auto const &[val, count_b] : max_counts_b)
  {
    if (max_counts_a.count(val) == 0)
    {
      max_len = max(max_len, count_b);
    }
  }
  if (n > 0 && max_len == 0)
  {
    max_len = 1;
  }

  cout << max_len << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
