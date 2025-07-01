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

        vll v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll negSum = 0;
        ll posSum = 0;

        for(int i = 0; i < n; i++) {
            if(v[i] > 0) {
                posSum += v[i];
            }
            else {
                negSum += v[i];
            }
        }

        negSum = -(negSum);
        posSum = -(posSum);

        cout << (posSum + negSum) << endl;
    }

    return 0;
}
