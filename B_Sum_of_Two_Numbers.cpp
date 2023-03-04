/*
Date:   10 February 2023
Problem Link:   https://codeforces.com/problemset/problem/1788/B
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
    int num;
    cin >> num;
    int res1, res2;
    res1 = num / 2;
    res2 = num - res1;
    string val1, val2;
    val1 = to_string(res1);
    val2 = to_string(res2);

    int i = val1.size() - 1, j = val2.size() - 1;
    int count = 0;
    while (i >= 0 && j >= 0)
    {
        if (val1[i] == '9' && val2[j] == '0')
        {
            if (count & 1)
            {
                val1[i] = '4';
                val2[j] = '5';
            }
            else
            {
                val1[i] = '5';
                val2[j] = '4';
            }
            count++;
        }
        i--;
        j--;
    }
    cout << val1 << " " << val2 << nl;
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