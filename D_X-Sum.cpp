//  https://codeforces.com/contest/1676/problem/D

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define vss vector<string>
#define vSort(v) sort(v.begin(), v.end())
#define vReverseSort(v) sort(v.rbegin(), v.rend())
#define vReverse(v) reverse(v.rbegin(), v.rend())
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    int row, col;
    cin >> row >> col;
    ll arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];
    }
    ll maximum = -1;
    ll sum;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = 0;
            int x = i;
            int y = j;
            while (x >= 0 && y >= 0)
                sum += arr[x--][y--];

            x = i;
            y = j;
            while (x < row && y < col)
                sum += arr[x++][y++];

            x = i;
            y = j;
            while (x >= 0 && y < col)
                sum += arr[x--][y++];

            x = i;
            y = j;
            while (x < row && y >= 0)
                sum += arr[x++][y--];

            sum -= (3 * arr[i][j]);

            maximum = max(sum, maximum);
        }
    }
    cout << maximum << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}