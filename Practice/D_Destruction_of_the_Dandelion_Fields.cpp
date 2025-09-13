#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long sum = 0;
    vector<long long> p(n);
    for (long long i = 0; i < n; i++)
    {
      cin >> p[i];
      sum += p[i];
    }
    sort(p.begin(), p.end());
    int i = 0;
    int j = n - 1;
    int cnt = 0;

    for (int b = n - 1; b >= 0; b--)
    {
      if (p[b] % 2 == 1)
      {
        cnt++;
        j = b;
        break;
      }
    }
    j--;

    bool swap = true;
    while (i <= j)
    {
      if (swap)
      {
        while (i <= j)
        {
          if (p[i] % 2 == 1)
          {
            cnt++;

            sum -= p[i];
            i++;
            break;
          }
          i++;
        }
      }
      else
      {
        while (i <= j)
        {
          if (p[j] % 2)
          {
            cnt++;

            j--;
            break;
          }
          j--;
        }
      }
      swap = !swap;
    }
    if (cnt > 0)
    {
      cout << sum << endl;
    }
    else
    {
      cout << 0 << endl;
    }
  }
}
