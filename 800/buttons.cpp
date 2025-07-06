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
        long long a, b, c;
        cin >> a >> b >> c;

        if (a > b)
        {
            cout << "First\n";
        }
        else if (b > a)
        {
            cout << "Second\n";
        }
        else
        {
            if (c % 2 == 1)
                cout << "First\n"; // Anna gets the last shared move
            else
                cout << "Second\n"; // shared moves are balanced
        }
    }

    return 0;
}
