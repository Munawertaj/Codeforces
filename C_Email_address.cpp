/*
Date:   10 November 2022
Problem Link:   https://codeforces.com/problemset/problem/41/C
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
    string mail;
    cin >> mail;
    string res;
    res.pb(mail[0]);
    int len = mail.size();
    bool flag = true;
    for (int i = 1; i < len; i++)
    {
        if (mail[i] == 'd' && i < len - 3)
        {
            if (mail[i + 1] == 'o' && mail[i + 2] == 't')
            {
                res.pb('.');
                i += 2;
            }
            else
                res.pb(mail[i]);
        }
        else if (mail[i] == 'a' && i < len - 2 && flag)
        {
            if (mail[i + 1] == 't')
            {
                res.pb('@');
                i++;
                flag = false;
            }
            else
                res.pb(mail[i]);
        }
        else
            res.pb(mail[i]);
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}