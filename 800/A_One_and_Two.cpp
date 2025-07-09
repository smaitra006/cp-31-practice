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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int total2s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                total2s++;
        }

        int left2s = 0;
        bool found = false;
        for (int k = 1; k < n; k++)
        {
            if (a[k - 1] == 2)
                left2s++;
            int right2s = total2s - left2s;
            if (left2s == right2s)
            {
                cout << k << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "-1\n";
    }

    return 0;
}
