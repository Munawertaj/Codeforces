/*
Date:   16 February 2023
Problem Link:   https://codeforces.com/problemset/problem/1285/B
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

ll maximum_sub_sum(int i, int j, vll &num)
{
    ll sub_sum = 0, max_sum = -INF;
    while (i < j)
    {
        if (sub_sum + num[i] <= 0)
            sub_sum = 0;
        else
            sub_sum += num[i];
        max_sum = max(max_sum, sub_sum);
        i++;
    }
    return max_sum;
}

void solve()
{
    int size;
    cin >> size;
    vll num(size);
    ll sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    ll max_sum = max(maximum_sub_sum(0, size - 1, num), maximum_sub_sum(1, size, num));

    if (sum > max_sum)
        cout
            << "YES" << nl;
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