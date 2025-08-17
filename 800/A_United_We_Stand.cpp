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
    vi a(n), odd_a, even_a;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            even_a.push_back(a[i]);
        }
        else {
            odd_a.push_back(a[i]);
        }
    }
    if(odd_a.size() == 0 || even_a.size() == 0) {
        cout << -1 << endl;
        return;
    }
    else {
        cout << odd_a.size() << " " << even_a.size() << endl;
        for(auto i : odd_a) {
            cout << i << " ";
        }
        cout << endl;
        for(auto i : even_a) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
