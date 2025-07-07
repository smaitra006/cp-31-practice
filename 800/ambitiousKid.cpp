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

    int n;
    cin >> n;

    vll v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int op = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(abs(v[i]) < op) {
            op = abs(v[i]);
        }
    }

    cout << op << endl;

    return 0;
}
