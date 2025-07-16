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
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) // n
            cin >> a[i];
        // inputs

        int count_of_zero = 0;

        for (int i = 0; i < n; i++) // n
        {
            if (a[i] == 0)
                count_of_zero++;
        }

        bool found_zero = false;
        int left = 0;
        int right = n - 1;

        while (a[left] == 0) // n
            left++;
        while (a[right] == 0) // n
            right--;

        for (int i = left; i <= right; i++) // n
        {
            if (a[i] == 0)
                found_zero = true;
        }

        if (count_of_zero == n) // case 1
            cout << 0 << endl;
        else if (found_zero == false) // case 2
            cout << 1 << endl;
        else // case 3
            cout << 2 << endl;
    }
    return 0;
}
