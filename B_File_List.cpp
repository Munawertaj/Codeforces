/*
Date:   24 February 2023
Problem Link:   https://codeforces.com/problemset/problem/174/B
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
    string st;
    cin >> st;
    vss words;
    string temp;
    if (st[0] == '.' || st.back() == '.')
    {
        cout << "NO";
        return;
    }
    for (auto x : st)
    {
        if (x != '.')
            temp.pb(x);
        else
        {
            if (words.size() > 0 && (temp.size() < 2 || temp.size() > 11))
            {
                cout << "NO";
                return;
            }
            words.pb(temp);
            temp.clear();
        }
    }
    words.pb(temp);
    if (words.size() < 2 || words[0].size() > 8 || words.back().size() > 3)
    {
        cout << "NO";
        return;
    }
    cout << "YES" << nl << words[0] << ".";
    int len;
    for (int i = 1; i < words.size() - 1; i++)
    {
        len = words[i].size();
        cout << words[i][0];
        len -= 9;
        int j;
        for (j = 1; j <= len; j++)
            cout << words[i][j];
        cout << nl;
        while (j < words[i].size())
        {
            cout << words[i][j];
            j++;
        }
        cout << ".";
    }
    cout << words.back();
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