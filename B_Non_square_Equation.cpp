/*
Date:   13 April 2023
Problem Link:   https://codeforces.com/problemset/problem/233/B
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

bool check(ll num1, ll digit)
{
    int sum = 0;
    while (num1)
    {
        sum += (num1 % 10);
        num1 /= 10;
    }
    if (sum == digit)
        return true;
    else
        return false;
}

ll roots(ll b, ll det)
{
    ll res1 = det - b;
    if (res1 % 2 == 0)
    {
        res1 /= 2;
        if (check(res1, b))
            return res1;
    }

    return -1;
}

void solve()
{
    ll num;
    cin >> num;

    ll ac4 = 4 * num, b = 1, b_square;
    ll det = sqrt(ac4), det_square;
    ll res = -1;
    while (b < 200)
    {
        det_square = det * det;
        b_square = det_square - ac4;
        b = sqrt(b_square);

        if (b * b == b_square)
        {
            res = roots(b, det);
            if (res > 0)
            {
                cout << res;
                return;
            }
        }

        det++;
    }

    cout << "-1";
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