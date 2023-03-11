/*
Date:   11 March 2023
Problem Link:   https://codeforces.com/problemset/problem/1793/C
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
    int n;
    cin >> n;
    vii v(n), s(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s[i] = v[i];
        b[i] = v[i];
    }
    sort(s.begin(), s.end());
    int sm = 0, bg = n - 1;
    int l = sm, r = bg;
    while (l < r)
    {
        if (v[l] != s[sm] and v[l] != s[bg] and v[r] != s[sm] and v[r] != s[bg])
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
        if (v[l] == s[sm])
        {
            l++;
            sm++;
        }
        else if (v[l] == s[bg])
        {
            l++;
            bg--;
        }
        else if (v[r] == s[sm])
        {
            r--;
            sm++;
        }
        else if (v[r] == s[bg])
        {
            r--;
            bg--;
        }
    }
    cout << -1 << endl;
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