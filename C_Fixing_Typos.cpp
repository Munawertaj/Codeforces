/*
Date:   27 February 2023
Problem Link:   https://codeforces.com/problemset/problem/363/C
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
    string st;
    cin >> st;

    string res;
    for (int i = 0; i < st.size(); i++)
    {
        res.pb(st[i]);
        if (i == 1)
            break;
    }

    int len;
    for (int i = 2; i < st.size(); i++)
    {
        len = res.size() - 1;
        if (st[i] == res[len] && st[i] == res[len - 1])
            continue;
        else
            res.pb(st[i]);
    }

    string ans;
    for (int i = 0; i < res.size(); i++)
    {
        ans.pb(res[i]);
        if (i == 2)
            break;
    }

    for (int i = 3; i < res.size(); i++)
    {
        len = ans.size() - 1;
        if (res[i] == ans[len] && ans[len - 1] == ans[len - 2])
            continue;
        else
            ans.pb(res[i]);
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