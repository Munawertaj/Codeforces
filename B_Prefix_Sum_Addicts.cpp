/*
Date:   13 January 2023
Problem Link:   https://codeforces.com/contest/1738/problem/B
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
    int size1, size2;
    cin >> size1 >> size2;
    vll num(size2);
    for (int i = 0; i < size2; i++)
        cin >> num[i];

    if (size2 == 1)
    {
        cout << "YES" << nl;
        return;
    }

    ll diff = num[1] - num[0];
    for (int i = 2; i < size2; i++)
    {
        if (num[i] - num[i - 1] < diff)
        {
            cout << "NO" << nl;
            return;
        }
        diff = num[i] - num[i - 1];
    }

    ll total = size1 - size2 + 1;
    ll check = num[0];
    diff = num[1] - num[0];

    if (total * diff >= check)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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