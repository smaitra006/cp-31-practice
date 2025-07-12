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
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        ll ans;
        for(ll i = 1; ; i++) {
            if(n % i != 0) {
                ans = i - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
