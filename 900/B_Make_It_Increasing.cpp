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

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll minCount = 0;
        bool flag = true;
        for (int i = n - 2; i >= 0; i--)
        {
            while (arr[i] >= arr[i + 1] && arr[i] > 0)
            {
                arr[i] /= 2;
                minCount++;
            }

            if (arr[i] == arr[i + 1])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << minCount << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
