#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin >> n;
      string s;
      cin >> s;

      bool continuous_three_empty_cells = false;
      int total_count_of_empty_cells = 0;

      for (int i = 0; i < n; i++)
      {
          if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
          {
            continuous_three_empty_cells = true;
            break;
          }
          if (s[i] == '.')
            total_count_of_empty_cells++;
      }

      if (continuous_three_empty_cells)
        cout << 2 << endl;
      else
        cout << total_count_of_empty_cells << endl;
    }

  return 0;
}
