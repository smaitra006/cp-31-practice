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

        long long n;
        cin >> n;

        if((n & (n - 1)) == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

    }
    return 0;
}
