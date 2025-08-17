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
    long long n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << endl;
    }
    else {
        if (k == 1 || (k == 2 && n % 2 == 1))
            cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            if (n % 2 == 0) {
                cout << n / 2 << endl;
                for (int i = 1; i <= n / 2; i++)
                    cout << 2 << " ";
                cout << endl;
            }
            else {
                cout << (n - 3) / 2 + 1 << endl;
                for (int i = 1; i <= (n - 3) / 2; i++)
                    cout << 2 << " ";
                cout << 3 << endl;
            }
        }
    }
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
