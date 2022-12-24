/*
Date:   24 December 2022
Problem Link:   https://codeforces.com/contest/1095/problem/C
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
    ll sum, values;
    cin >> sum >> values;
    ll temp = sum;
    int count = 0;
    while (temp)
    {
        if (temp % 2)
            count++;
        temp /= 2;
    }

    int minimum = count, maximum = sum;
    // cout << maximum << nl;
    if (values > maximum || values < minimum)
    {
        cout << "NO";
        return;
    }
    cout << "YES" << nl;

    vii power(40, 0);

    power[0] = sum;
    int j = 0;
    while (maximum != values)
    {
        if (power[j] < 2)
        {
            j++;
            if (power[j] < 2)
                break;
            else
                continue;
        }
        power[j] -= 2;
        power[j + 1]++;
        maximum--;
    }
    ll x;
    for (int i = 0; i <= j + 1; i++)
    {
        x = pow(2, i);
        for (int k = 0; k < power[i]; k++)
            cout << x << " ";
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