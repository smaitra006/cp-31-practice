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
        ll n;
        cin >> n;
        ll sum = 0;
        for(int i = 0; i < n - 1; ++i) {
            ll x;
            cin >> x;
            sum += x;
        }
        cout << -sum << '\n';
    }

    return 0;
}
