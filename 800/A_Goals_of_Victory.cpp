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

// Logic : Suppose there are two teams , one did x goals and other did y, so efficiency of one team will be (x-y) and other team will be (y-x) . The sum of all efficiencies will always be 0

void solve() {
    // Your logic here
    int n;
    cin >> n;
    vi a(n - 1);
    for(int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int eff = accumulate(a.begin(), a.end(), 0);
    cout << 0 - eff << endl;
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
