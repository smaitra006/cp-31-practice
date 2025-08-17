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
int lcm(int a, int b) { return a / gcd(a, b) * b; }\

// Logic : Brute force just try to build x from s by repeating s 6 times in a loop

void solve() {
    // Your logic here
    int m, n;
    cin >> m >> n;
    string s, x;
    cin >> s >> x;
    for(int i = 0; i < 6; i++) {
        if (s.find(x) != string::npos) {
            cout << i << endl;
            return;
        }
        s += s;
    }
    cout << -1 << endl;
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
