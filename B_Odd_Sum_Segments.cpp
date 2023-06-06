/*
Date:   06 June 2023
Problem Link:   https://codeforces.com/problemset/problem/1196/B
Author: Tareq Munawer Taj
CSE, Rajshahi University
*/

#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define pp pop_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define vss vector<string>
#define vpii vector<pii>
#define vpll vector<pll>
#define mpii map<int, int>
#define mpll map<ll, ll>
#define mpci map<char, int>
#define mpsi map<string, int>
#define FOR(i, n, x) for (int i = 0; i < n; i = i + x)
#define FORR(i, n, x) for (int i = n; i >= 0; i = i - x)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
#define matrix(x) vector<vector<x>>
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
    int size, seg;
    cin >> size >> seg;
    vll num(size);
    vii index;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        sum += num[i];
        if (sum & 1 && seg > 1)
        {
            index.pb(i + 1);
            sum = 0;
            seg--;
        }
    }
    if (seg == 1 && sum & 1)
    {
        cout << "YES" << nl;
        for (auto x : index)
            cout << x << " ";

        cout << size << nl;
    }
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