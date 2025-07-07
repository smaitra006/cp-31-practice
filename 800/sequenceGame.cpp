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

    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        long long n; // Length of sequence b
        cin >> n;
        vector<long long> b(n), a;  // Vector b to store input sequence, vector a to store the reconstructed sequence
        for (int i = 0; i < n; i++) // Loop to read the sequence b
            cin >> b[i];
        // Initial input of sequence b is completed

        a.push_back(b[0]);          // Always add the first element of b to a
        for (int i = 1; i < n; i++) // Loop through the rest of the sequence b
        {
            if (b[i] >= b[i - 1])
                a.push_back(b[i]); // If current element is greater than or equal to the previous, add it to a
            else
            {
                a.push_back(b[i]); // Add the current element to a
                a.push_back(b[i]); // Add the current element again to a to ensure a[i-1] <= a[i]
            }
        }
        cout << a.size() << endl; // Output the size of the reconstructed sequence a
        for (auto it : a)         // Output each element of the sequence a
            cout << it << " ";
        cout << endl; // New line after each test case
    }

    return 0;
}
