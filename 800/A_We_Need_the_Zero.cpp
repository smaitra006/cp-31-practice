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
        ll n;
        cin >> n;
        vll v(n);
        ll totalXOR = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for(ll i = 0; i < n; i++) {
            totalXOR ^= v[i];
        }

        if (n % 2 == 1)
        {
            cout << totalXOR << endl;
        }
        else
        {
            if (totalXOR == 0)
            {
                cout << totalXOR << endl;
            }
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
