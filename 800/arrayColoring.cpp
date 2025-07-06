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
        vll v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int oddCount = 0;

        for(int i = 0; i < n; i++) {
            if(v[i] % 2 != 0) {
                oddCount++;
            }
        }

        if(oddCount % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
