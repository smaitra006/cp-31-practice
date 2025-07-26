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
        ll n;
        cin >> n;
        vll a(n);
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[0];

        for(int i = 1; i < n; i++) {
            ans &= a[i];
        }

        cout << ans << endl;

    }
    return 0;
}
