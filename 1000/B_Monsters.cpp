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

struct Monster
{
  int id;
  int health;
};

bool compareMonsters(const Monster &a, const Monster &b)
{
  if (a.health != b.health)
  {
    return a.health > b.health;
  }
  return a.id < b.id;
}

void solve()
{
  // Your logic here
  int n, k;
  cin >> n >> k;

  vector<Monster> monsters(n);
  for (int i = 0; i < n; ++i)
  {
    monsters[i].id = i + 1;
    cin >> monsters[i].health;

    monsters[i].health %= k;
    if (monsters[i].health == 0)
    {
      monsters[i].health = k;
    }
  }

  sort(monsters.begin(), monsters.end(), compareMonsters);

  for (int i = 0; i < n; ++i)
  {
    cout << monsters[i].id << " ";
  }
  cout << endl;
}

int32_t main()
{
  fast_io int t = 1;
  cin >> t; // Uncomment if multiple test cases
  while (t--)
    solve();
  return 0;
}
