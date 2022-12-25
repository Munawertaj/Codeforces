/*
Date:   26 December 2022
Problem Link:   https://codeforces.com/problemset/problem/3/C
Author: Tareq Munawer Taj
CSE, Rajshahi University
*/

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long doublexdc
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

char grid[3][3];

bool won(char ch)
{
    int count = 0;
    // Cross Check ---------------------------
    for (int i = 0; i < 3; i++)
    {
        if (grid[i][i] == ch)
            count++;
    }
    if (count == 3)
        return true;

    count = 0;
    for (int i = 2; i >= 0; i--)
    {
        if (grid[2 - i][i] == ch)
            count++;
    }
    if (count == 3)
        return true;


    // Horizontal Check ----------------------
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == ch)
                count++;
        }
        if (count == 3)
            return true;
    }

    // Vertical Check ------------------------
    for (int i = 0; i < 3; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (grid[j][i] == ch)
                count++;
        }
        if (count == 3)
            return true;
    }
    return false;
}

void solve()
{
    int first, second, remaining;
    first = second = remaining = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'X')
                first++;
            else if (grid[i][j] == '0')
                second++;
            else
                remaining++;
        }
    }
    if (first < second || first - second > 1)
    {
        cout << "illegal";
        return;
    }

    bool x = won('X'), y = won('0');
    if (x || y)
    {
        if (x && y)
            cout << "illegal";
        else if (x && first - second == 1)
            cout << "the first player won";
        else if (y && first == second)
            cout << "the second player won";
        else
            cout << "illegal";
        return;
    }
    if (remaining == 0)
    {
        cout << "draw";
        return;
    }
    if (first == second)
        cout << "first";
    else
        cout << "second";
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