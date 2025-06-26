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
        long long n, x;
        cin >> n >> x;
        vector<long long> a(n + 2);
        a[0] = 0;
        a[n + 1] = x;
        for(int i = 1; i < n + 1; i++) {
            cin >> a[i];
        }
        vector<long long> diff(n + 1);
        for(int i = 0; i < n + 1; i++) {
            if(i == n) {
                diff[i] = 2 * (a[i + 1] - a[i]);
            }
            else {
                diff[i] = a[i + 1] - a[i];
            }
        }
        long long fuel = INT_MIN;
        for(int i = 0; i < n + 1; i++) {
            if(diff[i] > fuel) {
            fuel = diff[i];
            }
        }
        cout << fuel << endl;
    }

    return 0;
}
