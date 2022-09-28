/*
Date:   28 September 2022
Problem Link:   https://codeforces.com/contest/1352/problem/D
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
    vii candy(size);
    for (int i = 0; i < size; i++)
        cin >> candy[i];

    int i = 1, j = size - 1;
    ll alice = candy[0], bob = 0, curr_sum = 0, prev_sum = alice, ans = 1;
    bool flag = 0;
    while (i <= j)
    {
        flag = 0;
        curr_sum = 0;
        for (j; j >= i; j--)
        {
            curr_sum += candy[j];
            bob += candy[j];
            if (curr_sum > prev_sum)
            {
                prev_sum = curr_sum;
                j--;
                break;
            }
        }
        ans++;
        curr_sum = 0;
        for (i; i <= j; i++)
        {
            flag = 1;
            curr_sum += candy[i];
            alice += candy[i];
            if (curr_sum > prev_sum)
            {
                prev_sum = curr_sum;
                i++;
                break;
            }
        }
        if (flag)
            ans++;
    }
    cout << ans << " " << alice << " " << bob << nl;
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