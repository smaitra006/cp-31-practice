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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if ((d == b && c <= a))
        {
            cout << a - c << "\n";
        }
        else if ((d - b == c - a))
        {
            cout << d - b << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}
