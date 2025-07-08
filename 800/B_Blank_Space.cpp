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
        vi v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;
        int maxCount = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(v[i] == 0) {
                count++;
                maxCount = max(maxCount, count);
            }
            else if(v[i] == 1) {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }
        cout << maxCount << "\n";
    }

    return 0;
}
