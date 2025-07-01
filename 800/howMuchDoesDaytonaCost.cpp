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
        ll n, k;
        cin >> n >> k;

        vll v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        bool found = false;

        for(int i = 0; i < n; i++) {
            if(v[i] == k) {
                found = true;
            }
        }

        if(found) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
