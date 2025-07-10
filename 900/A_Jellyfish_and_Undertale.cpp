#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
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
        ll a, b, n;
        cin >> a >> b >> n;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll max_time = b;
        for (int i = 0; i < n; i++)
        {
            max_time += min(v[i], a - 1);
        }
        cout << max_time << endl;
    }

    return 0;
}
