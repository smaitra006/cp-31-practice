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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        vector<pii> directions = {{a, b}, {b, a}, {-a, -b}, {-b, -a}, {-a, b}, {b, -a}, {a, -b}, {-b, a}};

        set<pii> kingMoves, queenMoves;

        for (auto dir : directions)
        {
            int x_ = xk + dir.first;
            int y_ = yk + dir.second;
            kingMoves.insert({x_, y_});
        }

        for (auto dir : directions)
        {
            int x_ = xq + dir.first;
            int y_ = yq + dir.second;
            queenMoves.insert({x_, y_});
        }

        int count = 0;
        for (auto coord : kingMoves)
        {
            if (queenMoves.count(coord))
            {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
