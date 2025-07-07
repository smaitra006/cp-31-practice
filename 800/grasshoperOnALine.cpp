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
    cin >> t; // Read the number of test cases
    while (t--)
    {
        long long x, k;
        cin >> x >> k; // Read the endpoint x and the constraint k for each test case

        // Check if x is divisible by k
        if (x % k == 0) // If x is divisible by k, we need two moves
        {
            cout << 2 << endl;                 // Output the number of moves
            cout << 1 << " " << x - 1 << endl; // Output the two moves: 1 and x-1
        }
        else // If x is not divisible by k, we can reach x in one move
        {
            cout << 1 << endl; // Output the number of moves
            cout << x << endl; // Output the move: x
        }
    }

    return 0;
}
