/*
Date:   12 September 2022
Problem Link:   https://codeforces.com/contest/1729/problem/D
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
#define REVSORT(v) sort(v.rbegin(), v.rend())
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
    int size, count0 = 0;
    cin >> size;
    vll cost(size);
    vll have(size);
    vll pos;
    vll neg;
    FOR(i, size, 1)
    cin >> cost[i];
    FOR(i, size, 1)
    {
        cin >> have[i];
        ll x = have[i] - cost[i];
        if (x < 0)
            neg.pb(abs(x));
        else if (x > 0)
            pos.pb(x);
        else
            count0++;
    }
    int len1 = pos.size();
    int len2 = neg.size();
    if (len1 == 0)
    {
        cout << count0 / 2 << nl;
        return;
    }
    if (len2 == 0)
    {
        cout << (count0 + len1) / 2 << nl;
        return;
    }
    REVSORT(pos);
    REVSORT(neg);
    int i = 0, j = 0;

    for (i = 0; i < len1; i++)
    {
        if (j == len2)
            break;
        if (pos[i] < neg[j++])
            i--;
    }

    ll res = i + (len1 - i + count0) / 2;
    cout << res << nl;
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