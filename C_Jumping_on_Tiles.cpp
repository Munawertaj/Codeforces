/*
Date:   12 September 2022
Problem Link:   https://codeforces.com/contest/1729/problem/C
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
    string st;
    cin >> st;
    size = st.size();
    vii index[30];
    int res, sz = 2;
    char first = st[0], last = st[size - 1];
    
    if (first > last)
    {
        for (int i = 1; i < size - 1; i++)
        {
            if (st[i] <= first && st[i] >= last)
            {
                int x = st[i] - 'a';
                index[x + 1].pb(i + 1);
                sz++;
            }
        }
    }
    else
    {
        for (int i = 1; i < size - 1; i++)
        {
            if (st[i] >= first && st[i] <= last)
            {
                int x = st[i] - 'a';
                index[x + 1].pb(i + 1);
                sz++;
            }
        }
    }

    int i = first - 'a' + 1, j = last - 'a' + 1;

    cout << abs(i - j) << " " << sz << nl;
    cout << "1 ";
    if (i > j)
    {
        while (i >= j)
        {
            for (int k = 0; k < index[i].size(); k++)
                cout << index[i][k] << " ";
            i--;
        }
    }
    else
    {
        while (i <= j)
        {
            for (int k = 0; k < index[i].size(); k++)
                cout << index[i][k] << " ";
            i++;
        }
    }

    cout << size << nl;
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