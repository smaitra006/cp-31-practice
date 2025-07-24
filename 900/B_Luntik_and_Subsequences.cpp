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

        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) // n
            cin >> a[i];

        long long count_of_ones = 0;
        long long count_of_zeros = 0;
        for (long long i = 0; i < n; i++) // n
        {
            if (a[i] == 1)
                count_of_ones++;
            else if (a[i] == 0)
                count_of_zeros++;
        }

        long long ways = pow(2, count_of_zeros) * count_of_ones;
        cout << ways << endl;
    }
    return 0;
}
