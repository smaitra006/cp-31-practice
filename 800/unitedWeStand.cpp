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
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vll b, c;
        ll maxElement = *max_element(all(v));

        for (int i = 0; i < n; i++)
        {
            if (v[i] == maxElement)
                c.pb(v[i]);
            else
                b.pb(v[i]);
        }

        if (b.empty())
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << b.size() << " " << c.size() << '\n';
            for (auto i : b)
                cout << i << " ";
            cout << '\n';
            for (auto i : c)
                cout << i << " ";
            cout << '\n';
        }
    }

    return 0;
}
