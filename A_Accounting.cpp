/*
Date:   24 January 2023
Problem Link:   https://codeforces.com/contest/30/problem/A
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
    int a, b, power;
    cin >> a >> b >> power;
    if (a == 0)
    {
        if (b == 0)
            cout << "5";
        else
            cout << "No solution";
    }
    else if (b == 0)
        cout << "0";
    else if (b % a)
        cout << "No solution";
    else
    {
        int val = b / a;
        if (val < 0 && power % 2 == 0)
        {
            cout << "No solution";
            return;
        }
        int ans = 1;
        ll temp;
        while (1)
        {
            temp = pow(ans, power);
            if (temp == abs(val))
            {
                if (val < 0)
                    ans = (-1 * ans);
                cout << ans;
                return;
            }
            if (temp > abs(val))
                break;
            ans++;
        }
        cout << "No solution";
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