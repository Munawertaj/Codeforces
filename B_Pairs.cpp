/*
Date:   15 September 2022
Problem Link:
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

vector<pii> pr;

bool check(int size, int num)
{
    int x, y, i;
    for (i = 0; i < size; i++)
    {
        x = pr[i].ff;
        y = pr[i].ss;
        if (num == x || num == y)
            continue;
        else
            break;
    }
    if (i == size)
        return true;

    int check1 = pr[i].ff;
    int check2 = pr[i].ss;
    int j;
    for (j = i; j < size; j++)
    {
        x = pr[j].ff;
        y = pr[j].ss;
        if (check1 == x || check1 == y || num == x || num == y)
            continue;
        else
            break;
    }
    if (j == size)
        return true;
    for (j = i; j < size; j++)
    {
        x = pr[j].ff;
        y = pr[j].ss;
        if (check2 == x || check2 == y || num == x || num == y)
            continue;
        else
            break;
    }
    if (j == size)
        return true;
    else
        return false;
}

void solve()
{
    int upp, size;
    cin >> upp >> size;
    int x, y;
    FOR(i, size, 1)
    {
        cin >> x >> y;
        pr.pb({x, y});
    }
    x = pr[0].ff;
    y = pr[0].ss;
    if (check(size, x))
        YES;
    else if (check(size, y))
        YES;
    else
        NO;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}