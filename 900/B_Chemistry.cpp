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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for(int i = 0; i < n; i++) {
            freq[s[i]]++;
        }
        int odd = 0;
        for(auto it : freq) {
            if(it.second % 2 == 1) {
                odd++;
            }
        }
        if(k > odd || odd - 1 == k || odd == k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
