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

// Logic : Fuel needed will be the maximum distance between two consecutive stations. Catch is that we will include the points 0 and x too, distance from 0 to first gas station will also be considered and we will double the distance between last gas station and x because from last gas station we need to reach x and also come back to the last gas station to refuel again

void solve() {
    // Your logic here
    int n, x;
    cin >> n >> x;
    vi a(n + 2);
    a[0] = 0;
    a[n + 1] = x;
    for(int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    int fuel = 0;
    for(int i = 1; i < n + 2; i++) {
        if(i == n + 1) {
            fuel = max(fuel, 2 * (a[i] - a[i - 1]));
        }
        else {
            fuel = max(fuel, (a[i] - a[i - 1]));
        }
    }
    cout << fuel << endl;
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
