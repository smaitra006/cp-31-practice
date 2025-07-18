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
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        map<long long, long long> mp;
        for (long long i = 0; i < n; i++)
            mp[a[i]]++;

        long long current_highest_freq = 0;
        for (auto i : mp)
            current_highest_freq = max(current_highest_freq, i.second);

        long long operations = 0;
        while (current_highest_freq < n) 
        {
            operations++; // to clone the array
            if (current_highest_freq * 2 <= n)
            {
                operations += current_highest_freq; // swap all the copies
                current_highest_freq *= 2;
            }
            else
            {
                operations += n - current_highest_freq; // swap only required copies
                current_highest_freq = n;
            }
        }

        cout << operations << endl;
    }
    return 0;
}
