/*
Date:   21 February 2023
Problem Link:   https://codeforces.com/problemset/problem/94/C
Author: Tareq Munawer Taj
CSE, Rajshahi University
*/

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
#define FOR(i, n, x) for (int i = 0; i < n; i = i + x)
#define FORR(i, n, x) for (int i = n; i >= 0; i = i - x)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
#define matrix(x) vector<vector<x>>
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 100005
using namespace std;

void solve()
{
    ll folders, width, first, last;
    cin >> folders >> width >> first >> last;
    ll row1, col1, row2, col2;

    row1 = ceil(1.0 * first / width);
    row2 = ceil(1.0 * last / width);

    col1 = first % (width);
    if (col1 == 0)
        col1 = width;
    col1 = first % (width);
    if (col1 == 0)
        col1 = width;
    col2 = last % (width);
    if (col2 == 0)
        col2 = width;

    int ans = 1;
    if (col1 == 1 && row2 - row1 > 0)
    {
        if (col2 == width || last == folders)
            ans = 1;
        else
            ans = 2;
    }
    else
    {
        if (col1 != 1 && row1 - row2 != 0)
            ans++;
        if (last != folders)
        {
            if (col2 != width && row2 - row1 > 1)
                ans++;
        }
        if (ans == 3 && col1 - col2 == 1)
            ans--;
    }

    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    return 0;
}