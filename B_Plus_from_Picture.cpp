/*
Date:   14 February 2023
Problem Link:   https://codeforces.com/contest/1182/problem/B
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
    char picture[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> picture[i][j];

    int check_row = -1, check_col = -1;
    bool flag = false;
    for (int i = 0; i < row; i++)
    {
        if (flag)
            break;
        for (int j = 0; j < col; j++)
        {
            if (flag)
                break;

            if (picture[i][j] == '*')
            {
                while (i < row)
                {
                    if (picture[i][j] == '.')
                        break;
                    if (j - 1 >= 0 && j + 1 < col && i + 1 < row)
                    {
                        if (picture[i][j - 1] == '*' && picture[i][j + 1] == '*' && picture[i + 1][j] == '*')
                        {
                            check_row = i;
                            check_col = j;
                        }
                    }
                    picture[i][j] = '+';
                    i++;
                }
                flag = true;
            }
        }
    }
    if (check_col < 0)
    {
        cout << "NO";
        return;
    }
    for (int i = check_col - 1; i >= 0; i--)
    {
        if (picture[check_row][i] != '*')
            break;
        picture[check_row][i] = '+';
    }
    for (int i = check_col + 1; i < col; i++)
    {
        if (picture[check_row][i] != '*')
            break;
        picture[check_row][i] = '+';
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (picture[i][j] == '*')
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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