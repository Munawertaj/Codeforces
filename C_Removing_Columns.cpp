/*
Date:   25 April 2023
Problem Link:   https://codeforces.com/problemset/problem/496/C
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
    int row, col;
    cin >> row >> col;
    char table[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin >> table[i][j];
    }
    int i, j, k, l;

    set<int> colums;
    char ch;
    for (i = 0; i < col; i++)
    {
        ch = 'a';
        for (j = 1; j < row; j++)
        {
            if (colums.count(i))
                continue;
            if (table[j][i] < table[j - 1][i])
            {
                for (k = 0; k < col; k++)
                {
                    if (colums.count(k) == 1)
                        continue;
                    if (table[j][k] != table[j - 1][k])
                    {
                        if (table[j][k] < table[j - 1][k])
                            colums.insert(k);
                        break;
                    }
                }
            }
        }
    }

    cout << colums.size();
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