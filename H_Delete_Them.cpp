/*
Date:   08 March 2023
Problem Link:   https://codeforces.com/problemset/problem/730/H
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
    int total, del;
    cin >> total >> del;
    vss file_name;
    string name;
    for (int i = 0; i < total; i++)
    {
        cin >> name;
        file_name.pb(name);
    }
    vii index(del);
    for (int i = 0; i < del; i++)
        cin >> index[i];

    int len = file_name[index[0] - 1].size();
    for (int i = 1; i < del; i++)
    {
        if (len != file_name[index[i] - 1].size())
        {
            cout << "No";
            return;
        }
    }
    string res;
    char ch;
    for (int i = 0; i < len; i++)
    {
        ch = file_name[index[0] - 1][i];
        for (int j = 1; j < del; j++)
        {
            if (ch != file_name[index[j] - 1][i])
            {
                ch = '?';
                break;
            }
        }
        res.pb(ch);
    }

    int j = 0;
    for (int i = 0; i < total; i++)
    {
        if (index[j] - 1 == i)
        {
            j++;
            continue;
        }
        name = file_name[i];
        if (name.size() == len)
        {
            bool flag = true;
            for (int k = 0; k < len; k++)
            {
                if (name[k] != res[k] && res[k] != '?')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "No";
                return;
            }
        }
    }
    cout << "Yes" << nl << res;
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