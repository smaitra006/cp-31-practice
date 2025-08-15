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

// Logic : Any n % 3 can be 0, 1, 2 . Now if its 1 then -1 by Vanya will win, if its 2 then +1 by Vanya will win but if its 0 then Vanya can never win

void solve() {
    // Your logic here
    int n;
    cin >> n;
    if(n % 3 == 0) {
        cout << "Second" << endl;
    }
    else {
        cout << "First" << endl;
    }
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
