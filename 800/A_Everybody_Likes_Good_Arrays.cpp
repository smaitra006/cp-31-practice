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
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long operations_count = 0;

        for (long long i = 0; i < n - 1; i++)
        {
            if ((a[i] % 2) == (a[i + 1] % 2))
                operations_count++;
        }
        cout << operations_count << endl;
    }

    return 0;
}
