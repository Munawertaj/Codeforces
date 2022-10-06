/*
Date:   30 September 2022
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

void solve()
{
    int size;
    cin >> size;

    vii skill(size);
    vll dam1;
    vll dam2;

    for (int i = 0; i < size; i++)
        cin >> skill[i];

    ll temp, count = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        count += temp;
        if (skill[i])
            dam1.pb(temp);
        else
            dam2.pb(temp);
    }
    if (dam1.size() == 0 || dam2.size() == 0)
    {
        cout << count << nl;
        return;
    }
    SORT(dam1);
    SORT(dam2);

    int i = dam1.size() - 1, j = dam2.size() - 1;
    // cout << i << " " << j << nl;
    while (i >= 0 && j >= 0)
    {
        dam1[i] *= 2;
        dam2[j] *= 2;
        i--;
        j--;
    }

    count = 0;

    for (int i = 0; i < dam1.size(); i++)
        // cout << dam1[i] << " ";
        count += dam1[i];
    for (int i = 0; i < dam2.size(); i++)
        // cout << dam2[i] << " ";
        count += dam2[i];

    if (dam1.size() == dam2.size())
        count -= min(dam1[0] / 2, dam2[0] / 2);

    cout << count << nl;
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