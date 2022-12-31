/*
Date:   29 December 2022
Problem Link:   https://codeforces.com/problemset/problem/1363/B
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
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '0')
            cnt0++;
        else
            cnt1++;
    }
    int ans = -1;
    if (st[0] == st.back())
        ans = min(cnt0, cnt1);
    else
    {
        string temp;
        temp.pb(st[0]);
        for (int j = 1; j < st.size(); j++)
        {
            if (st[j] != temp.back())
                temp.pb(st[j]);
        }
        cnt0 = cnt1 = -1;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] == '0')
                cnt0++;
            else
                cnt1++;
        }
        ans = min(cnt1, cnt0);
    }
    cout << ans << nl;

    // cout << max(count_0, count_1) << nl;
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