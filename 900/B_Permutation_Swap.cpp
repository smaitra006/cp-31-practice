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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
                continue;
            x = abs(arr[i] - (i + 1));
            ans = gcd(x, ans);
        }
        cout << ans << endl;
    }
    return 0;
}
