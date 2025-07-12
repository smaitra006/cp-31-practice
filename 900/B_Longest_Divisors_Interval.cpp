#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
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
        ull n;
        cin >> n;
        ull ans;
        for(ull i = 1; ; i++) {
            if(n % i != 0) {
                ans = i - 1;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
