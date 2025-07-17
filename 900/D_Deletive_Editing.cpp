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

        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();

        vector<int> frequency_in_t(26, 0);
        for (int i = 0; i < m; i++) // m
            frequency_in_t[t[i] - 'A']++;

        for (int i = n - 1; i >= 0; i--) // n
        {
            if (frequency_in_t[s[i] - 'A'] > 0)
                frequency_in_t[s[i] - 'A']--;
            else
                s[i] = '.';
        }

        string final_string = "";

        for (int i = 0; i < n; i++) // n
        {
            if (s[i] != '.')
                final_string += s[i];
        }

        if (final_string == t) // m
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
