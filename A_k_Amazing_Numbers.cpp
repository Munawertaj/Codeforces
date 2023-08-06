/*
Date:   06 August 2023
Problem Link:   https://codeforces.com/problemset/problem/1416/A
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
    int size;
    cin >> size;
    vii num(size + 1), previous(size + 1, 0), max_diff(size + 1, 0);
    int diff;
    for (int i = 1; i <= size; i++)
    {
        cin >> num[i];
        diff = i - previous[num[i]];
        previous[num[i]] = i;
        max_diff[num[i]] = max(max_diff[num[i]], diff);
    }
    for (int i = 1; i <= size; i++)
    {
        if (max_diff[i])
        {
            diff = size + 1 - previous[i];
            max_diff[i] = max(max_diff[i], diff);
        }
    }

    vii ans(size + 1, -1);
    int val;
    for (int i = 1; i <= size; i++)
    {
        val = max_diff[i];
        if (ans[val] < 0)
            ans[val] = i;
        else
            ans[val] = min(ans[val], i);
    }

    int i;
    for (i = 1; i <= size; i++)
    {
        if (ans[i] > 0)
            break;
        cout << ans[i] << " ";
    }
    int last = ans[i];
    while (i <= size)
    {
        if (ans[i] < last && ans[i] > 0)
            last = ans[i];

        cout << last << " ";
        i++;
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