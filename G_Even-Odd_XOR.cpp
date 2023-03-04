/*
Date:   01 January 2023
Problem Link:   https://codeforces.com/contest/1722/problem/G
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
    ll size;
    cin >> size;
    if (size == 3)
        cout << "2 1 3";
    else
    {
        vll ans(size);
        if (size & 1)
        {
            ans[size - 1] = 0;
            size--;
        }
        ll x, y;
        x = (2 << 25);
        y = (2 << 26);
        ll temp = 1;
        for (int i = 0; i < size; i += 2)
        {
            ans[i] = temp;
            ans[i + 1] = temp + x;
            temp++;
        }
        if (size % 4)
        {
            ans[1] += (y - x);
            ans[3] += y;
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}