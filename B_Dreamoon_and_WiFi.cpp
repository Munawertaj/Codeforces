/*
Date:   11 December 2022
Problem Link:   https://codeforces.com/problemset/problem/476/B
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

ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}

void solve()
{
    string send, rec;
    cin >> send >> rec;

    ll cnt1 = 0, cnt2 = 0, cntq = 0;
    for (int i = 0; i < send.size(); i++)
    {
        if (send[i] == '+')
            cnt1++;
        else
            cnt1--;

        if (rec[i] == '+')
            cnt2++;
        else if (rec[i] == '-')
            cnt2--;
        else
            cntq++;
    }
    double res = 0;
    if (cntq == 0)
    {
        if (cnt1 == cnt2)
            res = 1;
        else
            res = 0;
    }
    else
    {
        ll temp = cnt1 - cnt2;
        for (int i = 0; i <= cntq; i++)
        {
            if (cntq - (i * 2) == temp)
            {
                res = nCr(cntq, i);
                break;
            }
        }
        res /= (pow(2, cntq));
    }
    cout << setdigit(12) << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin>>tc;
    while (tc--)
        solve();
    return 0;
}