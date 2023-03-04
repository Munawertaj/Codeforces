/*
Date:   31 December 2022
Problem Link:   https://codeforces.com/problemset/problem/1538/C
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
    ll size, minimum, maximum;
    cin >> size >> minimum >> maximum;
    vll num(size);
    for (int i = 0; i < size; i++)
        cin >> num[i];

    SORT(num);
    ll ans = 0;
    ll temp1, temp2;

    for (int i = 0; i < size - 1; i++)
    {

        temp1 = lower_bound(num.begin() + i + 1, num.end(), minimum - num[i]) - num.begin();
        if (temp1 == i)
            temp1++;

        if (num[i] >= maximum)
            break;
        else
            temp2 = upper_bound(num.begin() + i + 1, num.end(), maximum - num[i]) - num.begin() - 1;
        // cout << i << ": " << temp1 << "  " << temp2 << nl;
        if (temp1 > temp2 || temp2 == i)
            continue;
        ans += (temp2 - temp1 + 1);
    }
    cout << ans << nl;
    // cout << nl;
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