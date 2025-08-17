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

// Logic : Make the board precomputed and brute force add score

const int score[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1} };

void solve()
{
    // Your logic here
    char a[10][10];
    for (int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++) {
            a[i][j] = s[j];
        }
    }

    int total_score = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (a[i][j] == 'X') {
                total_score += score[i][j];
            }
        }
    }
    cout << total_score << endl;
}

int32_t main()
{
    fast_io
    int t = 1;
    cin >> t; // Uncomment if multiple test cases
    while (t--) solve();
    return 0;
}
