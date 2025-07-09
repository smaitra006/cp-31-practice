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
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        long long max_number = a[n - 1];
        long long min_number = a[0];
        if (max_number == min_number)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << max_number << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}
