#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while(t--) {

        string s;
        cin >> s;
        int n = s.size();

        if(s[0] != s[n - 1]) {
            if(s[0] == 'a') {
                s[0] = 'b';
            }
            else {
                s[0] = 'a';
            }
        }
        cout << s << endl;

    }
    return 0;
}
