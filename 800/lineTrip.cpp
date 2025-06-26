#include <bits/stdc++.h>
using namespace std;

int main() {
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
}
