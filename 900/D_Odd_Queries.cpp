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

        int n, q;
        cin >> n >> q;
        vll arr(n + 1), pre(n + 1);
        pre.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            pre[i] = arr[i] + pre[i - 1];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll left = pre[l - 1];
            ll right = pre[n] - pre[r];
            ll len = r - l + 1;
            ll z = k * len;
            ll sum = left + right + z;
            cout << ((sum % 2) ? "YES" : "NO");
            cout << "\n";
        }
    }
    return 0;
}
