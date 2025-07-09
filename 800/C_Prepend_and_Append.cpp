#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start = 0, end = n - 1;
        int ans = 0;
        while(start <= end) {
            if(s[start] == s[end]) {
                ans = (end - start) + 1;
                break;
            }
            start++;
            end--;
        }
        cout << ans << endl;
    }

    return 0;
}
