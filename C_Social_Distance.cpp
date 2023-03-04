/*
Date:   17 December 2022
Problem Link:   https://codeforces.com/problemset/problem/1367/C
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
    int size, diff;
    cin >> size >> diff;
    string st;
    cin >> st;
    int count = 0, ans = 0, i, j, seg;

    for (i = 0; i < size; i++)
    {
        if (st[i] == '1')
            break;
        count++;
    }
    if (i == size || count > diff)
    {
        ans++;
        st[0] = '1';
    }
    count = 0;
    for (j = size - 1; j > 0; j--)
    {
        if (st[j] == '1')
            break;
        count++;
    }
    if (count > diff)
    {
        ans++;
        st[size - 1] = '1';
    }

    count = 0;
    seg = 2 * diff + 1;

    for (i = 0; i < size; i++)
    {
        if (st[i] == '1')
            count++;
        if (i >= seg - 1)
        {
            if (count == 0)
            {
                ans++;
                st[i - diff] = '1';
                count++;
            }
            if (st[i - seg + 1] == '1')
                count--;
        }
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