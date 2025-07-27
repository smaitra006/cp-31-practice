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
    while (t--) {

        long long a, b;
        cin >> a >> b;
        if (b > a)
            swap(a, b);

        if (a == b)
            cout << 0 << " " << 0 << endl;
        else {
            long long gcd = a - b;
            long long moves = min(b % gcd, gcd - b % gcd);
            cout << gcd << " " << moves << endl;

        }
    }
    return 0;
}
