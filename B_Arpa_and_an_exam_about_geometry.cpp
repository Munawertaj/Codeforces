/*
Date:   18 August 2023
Problem Link:   https://codeforces.com/problemset/problem/851/B
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

void solve()
{
    vector<pii> points;
    int x, y;
    for (int i = 0; i < 3; i++)
    {
        cin >> x >> y;
        points.push_back({x, y});
    }
    bool flag = true;
    vll dist, dx, dy;
    for (int i = 0; i < 2; i++)
    {
        dx.push_back(points[i].ff - points[i + 1].ff);
        dy.push_back(points[i].ss - points[i + 1].ss);
        dist.push_back(dx[i] * dx[i] + dy[i] * dy[i]);
        if (dy[i])
            flag = false;
    }
    if (dist[0] != dist[1] || flag)
        cout << "No";
    else
    {
        double m1, m2;
        m1 = (1.0 * dy[0]) / dx[0];
        m2 = (1.0 * dy[1]) / dx[1];
        if (m1 == m2)
            cout << "No";
        else
            cout << "Yes";
    }
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