/*
Date:   12 March 2023
Problem Link:   https://codeforces.com/problemset/problem/117/A
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

ll person, flor;

ll calculate(ll s, ll e, ll t)
{
    ll check = ceil((t * 1.0) / (flor - 1));
    bool upword = false;
    if (check & 1)
        upword = true;

    ll stands, rem;
    rem = t % (flor - 1);
    if (upword)
    {
        if (rem == 0)
            stands = flor;
        else
            stands = rem + 1;
    }
    else
    {
        if (rem == 0)
            stands = 1;
        else
            stands = flor - rem;
    }
    // cout << "s: " << stands << "  up=" << upword << nl;
    ll ans = t;
    if (s < e)
    {
        if (upword)
        {
            if (s >= stands)
                ans += (e - stands);
            else
                ans += (2 * flor + e - stands - 2);
        }
        else
            ans += (stands + e - 2);
    }
    else if (s > e)
    {
        if (upword)
            ans += (2 * flor - stands - e);
        else
        {
            if (s <= stands)
                ans += (stands - e);
            else
                ans += (2 * flor + stands - e - 2);
        }
    }
    else
        ans = t;
    return ans;
}

void solve()
{
    cin >> person >> flor;
    ll start, end, time;
    for (int i = 0; i < person; i++)
    {
        cin >> start >> end >> time;
        cout << calculate(start, end, time) << nl;
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