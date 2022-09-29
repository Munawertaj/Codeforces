/*
Date:   29 September 2022
Problem Link:   https://codeforces.com/contest/1352/problem/F
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
    int n0, n1, n2;
    cin >> n0 >> n1 >> n2;

    if (n0 == 0 && n2 == 0)
    {
        for (int i = 0; i < n1; i += 2)
            cout << "10";
        if (n1 % 2 == 0)
            cout << "1";
        cout << nl;
        return;
    }

    if (n0)
        for (int i = 0; i <= n0; i++)
            cout << "0";

    if (n2)
        for (int i = 0; i <= n2; i++)
            cout << "1";

    if (n0 && n2) // already found a sequence 01
        n1--;

    int count = 0;
    string st;
    if (n2) // last e 1 ache
        st = "01";
    else // last e 0 ache
        st = "10";
    while (count < n1)
    {
        if (n1 - count == 1)
        {
            if (n2)
                cout << "0";
            else
                cout << "1";
            break;
        }
        else
            cout << st;
        count += 2;
    }

    cout << nl;
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