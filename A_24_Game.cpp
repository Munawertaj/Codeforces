/*
Date:   23 April 2023
Problem Link:   https://codeforces.com/problemset/problem/468/A
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
#define YES cout << f("YES\n")
#define NO cout << f("NO\n")
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 100005
using namespace std;

void solve()
{
    ll num;
    cin >> num;
    if (num < 4)
    {
        cout << "NO";
        return;
    }
    cout << "YES" << nl;

    ll i;
    if (num & 1)
    {
        cout << "2 - 1 = 1" << nl;
        cout << "1 + 3 = 4" << nl;
        cout << "4 * 5 = 20" << nl;
        cout << "20 + 4 = 24" << nl;
        i = 6;
    }
    else
    {
        cout << "1 * 2 = 2" << nl;
        cout << "2 * 3 = 6" << nl;
        cout << "6 * 4 = 24" << nl;
        i = 5;
    }

    while (i < num)
    {
        cout << i + 1 << " - " << i << " = 1" << nl;
        cout << "24 * 1 = 24" << nl;
        i += 2;
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