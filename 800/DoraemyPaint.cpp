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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<long long, long long> frequency_map;
        for (int i = 0; i < n; i++)
            frequency_map[a[i]]++;


        if (frequency_map.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            long long freq_1 = frequency_map.begin()->second;
            long long freq_2 = frequency_map.rbegin()->second;

            if (freq_1 == freq_2)
                cout << "Yes" << endl;
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
