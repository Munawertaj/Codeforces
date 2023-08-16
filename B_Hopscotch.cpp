/*
Date:   16 August 2023
Problem Link:   https://codeforces.com/problemset/problem/141/B
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
#define setdigit(n) fixed << setprecision(n)
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define ff first
#define ss second
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 100005
using namespace std;

int findAns(int len, int val, int x)
{
    int n;
    if (val == 0)
    {
        if (abs(x) * 2 >= len)
            return -1;
        else
            return 1;
    }
    else if (val & 1)
    {
        n = (val + 1) / 2;
        if (abs(x) * 2 >= len)
            return -1;
        else
            return 2 + (n - 1) * 3;
    }
    else
    {
        n = val / 2;
        int ans = 4 + (n - 1) * 3;
        if (x < 0)
            ans--;
        return ans;
    }
}

void solve()
{
    int length, x, y;
    cin >> length >> x >> y;
    int x0 = abs(x);
    int ans;
    if (y == 0 || x0 >= length)
        ans = -1;
    else if (y && y % length == 0)
        ans = -1;
    else if (x0 == 0)
    {
        int val = y / length;
        if (val == 0 || val & 1)
            ans = findAns(length, val, x);
        else
            ans = -1;
    }
    else
    {
        int val = y / length;
        ans = findAns(length, val, x);
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin>>tc;
    while (tc--)
        solve();
    return 0;
}