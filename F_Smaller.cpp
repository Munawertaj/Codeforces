/*
Date:   26 October 2022
Problem Link:   https://codeforces.com/contest/1742/problem/F
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
    int query;
    cin >> query;
    int opr, k;
    string st;
    vll scount(30, 0), tcount(30, 0);
    scount[0] = 1;
    tcount[0] = 1;
    while (query--)
    {
        cin >> opr >> k >> st;
        for (int i = 0; i < st.size(); i++)
        {
            int x = st[i] - 'a';
            if (opr == 1)
                scount[x] += k;
            else
                tcount[x] += k;
        }
        bool res = false;
        for (int i = 1; i < 26; i++)
        {
            // cout << scount[i] << " " << tcount[i] << nl;
            if (tcount[i])
            {
                res = true;
                break;
            }
        }

        if (!res)
        {
            int i;
            for (i = 1; i < 26; i++)
                if (scount[i])
                    break;
            if (i == 26 && scount[0] < tcount[0]) // string s and t both have all aaaaa 
                res = true;
        }

        if (res)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
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