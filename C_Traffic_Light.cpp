/*
Date:   23 November 2022
Problem Link:   https://codeforces.com/contest/1744/problem/C
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
    int size;
    char ch;
    cin >> size >> ch;
    string st;
    cin >> st;
    if (ch == 'g')
    {
        cout << "0" << nl;
        return;
    }
    int f_ind, l_ind;
    vii g_index;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (flag && st[i] == ch)
        {
            f_ind = i;
            flag = false;
        }
        if (st[i] == ch)
            l_ind = i;
        if (st[i] == 'g')
            g_index.pb(i);
    }
    ll ans;
    if (f_ind > g_index.back())
        ans = size - f_ind + g_index[0];
    else if (l_ind > g_index.back())
        ans = (size - l_ind) + g_index[0];
    else
    {
        int temp = lowbound(g_index, f_ind);
        ans = g_index[temp] - f_ind;
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}