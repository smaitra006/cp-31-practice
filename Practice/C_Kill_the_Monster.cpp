// Competitive Programming Template (C++)
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '\n'
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const int INF = 1e18;
typedef vector<int> vi;
typedef pair<int, int> pii;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

void solve()
{
    // Your logic here
    int hc, dc, hm, dm, k, ai, hi;
    cin >> hc >> dc >> hm >> dm >> k >> ai >> hi;
    bool possible = false;
    for (int i = 0; i <= k; i++) {
        int __hc = hc + (i * hi);
        int __dc = dc + ((k - i) * ai);
        int x = (__hc + dm - 1) / dm;
        int y = (hm + __dc - 1) / __dc;
        if (x >= y) {
            possible = true;
            break;
        }
    }
    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    fast_io
        int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();
    return 0;
}
