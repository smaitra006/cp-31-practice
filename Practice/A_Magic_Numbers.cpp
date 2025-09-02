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
    int num;
    cin >> num;
    int four_cnt = 0;
    while (num > 0) {
        if (num % 10 != 1 && num % 10 != 4) {
            cout << "NO" << endl;
            return;
        }
        else {
            if (num % 10 == 4) {
                four_cnt++;
                if (four_cnt > 2) {
                    cout << "NO" << endl;
                    return;
                }
            }
            else {
                four_cnt = 0;
            }
        }
        num /= 10;
    }
    if (four_cnt == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    fast_io
        int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--) solve();
    return 0;
}
