// Competitive Programming Template (C++)
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9+7;
const int INF = 1e18;
typedef vector<int> vi;
typedef pair<int, int> pii;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

void solve() {
    // Your logic here
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = abs(x);
    }
    int ans = *min_element(a.begin(), a.end());
    cout << ans << endl;
}

int32_t main() {
    fast_io
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
