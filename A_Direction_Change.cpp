//  https://codeforces.com/contest/1668/problem/A

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
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
    ll row, col;
    cin >> row >> col;
    ll diff = abs(row - col);
    ll count;
    if (row == 1 || col == 1)
    {
        if (diff == 0)
            count = 0;
        else if (diff == 1)
            count = 1;
        else
            count = -1;
    }
    else
    {
        ll minimum = min(row, col);
        count = (minimum * 2 - 2) + diff * 2;
        if (diff & 1)
            count--;
    }
    cout << count << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}