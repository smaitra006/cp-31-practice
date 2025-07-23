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

int min_operations(string n, string possible_value)
{
    int operations = 0;
    int checker_index = possible_value.size() - 1; // 1
    for (int i = n.size() - 1; i >= 0; i--)        // 20
    {
        if (n[i] == possible_value[checker_index])
        {
            checker_index--;
            if (checker_index < 0)
                break;
        }
        else
            operations++;
    }
    if (checker_index >= 0)
        operations = INT_MAX;
    return operations;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        vector<string> possible_values = {"00", "25", "50", "75"};
        int ans = INT_MAX;
        for (auto possible_value : possible_values) // 4
            ans = min(ans, min_operations(n, possible_value));
        cout << ans << endl;
    }
    return 0;
}
