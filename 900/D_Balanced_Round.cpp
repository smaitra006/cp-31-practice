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
        ll n, k;
        cin >> n >> k;
        vll v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(begin(v), end(v));
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }
        ll count = 1;
        ll max_count = INT_MIN;
        for(ll i = 1; i < n; i++) {
            if(v[i] - v[i - 1] <= k) {
                count++;
            }
            else {
                max_count = max(max_count, count);
                count = 1;
            }
        }
        max_count = max(max_count, count);
        cout << (n - max_count) << endl;

    }
    return 0;
}
