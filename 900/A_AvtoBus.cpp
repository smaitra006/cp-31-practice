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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) {
        ll n, mn, mx;
        cin >> n;
        if (n % 2 == 1 || n < 4)
            cout << -1 << endl;
        else
        {
            mn = n / 6;
            if (n % 6 != 0)
                mn++;

            mx = n / 4;

            cout << mn << " " << mx << endl;
        }
    }
    return 0;
}
