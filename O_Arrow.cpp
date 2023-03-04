/*
Date:   28 December 2022
Problem Link:   https://codeforces.com/contest/630/problem/O
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
    double px, py, vx, vy, base, height, side1, side2;
    cin >> px >> py >> vx >> vy >> base >> height >> side1 >> side2;

    double magnitude = sqrt((vx * vx) + (vy * vy));
    vx /= magnitude;
    vy /= magnitude;
    vector<pair<double, double>> res(7);

    base /= 2;
    side1 /= 2;

    res[0].ff = px + vx * height;
    res[0].ss = py + vy * height;
    res[1].ff = px - vy * base;
    res[1].ss = py + vx * base;
    res[2].ff = px - vy * side1;
    res[2].ss = py + vx * side1;
    res[3].ff = px - vy * side1 - vx * side2;
    res[3].ss = py + vx * side1 - vy * side2;
    res[4].ff = px + vy * side1 - vx * side2;
    res[4].ss = py - vx * side1 - vy * side2;
    res[5].ff = px + vy * side1;
    res[5].ss = py - vx * side1;
    res[6].ff = px + vy * base;
    res[6].ss = py - vx * base;

    for (auto x : res)
        cout << setdigit(12) << x.ff << " " << x.ss << nl;
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