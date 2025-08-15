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

// Logic : If we ever have ... then this actually becomes an infinite water source , so answer will be always 2 which is required to make this. If we dont have any such thing then answer will be number of .

void solve() {
    // Your logic here
    int n;
    cin >> n;
    string s;
    cin >> s;
    int conse_cnt = 0, cnt = 0;
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if(conse_cnt == 3) {
            flag = true;
            break;
        }
        if(s[i] == '.') {
            conse_cnt++;
            cnt++;
        }
        else {
            conse_cnt = 0;
        }
    }
    if(flag || conse_cnt == 3) {
        cout << 2 << endl;
    }
    else {
        cout << cnt << endl;
    }
}

int32_t main() {
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while(t--) solve();
    return 0;
}
