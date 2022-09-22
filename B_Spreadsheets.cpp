/*
Date:   22 September 2022
Problem Link:   https://codeforces.com/contest/1/problem/B
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

ll str_to_num(string x)
{
    int j = 0;
    ll num = 0;
    for (int i = x.size() - 1; i >= 0; i--)
        num += ((x[i] - '0') * pow(10, j++));

    return num;
}

string num_to_str(int num)
{
    string res;
    char ch;
    int rem;
    while (num > 0)
    {
        rem = num % 26;
        if (rem == 0)
        {
            num--;
            res.pb('Z');
            num /= 26;
            continue;
        }
        ch = 'A' + rem - 1;
        res.pb(ch);
        num = num / 26;
    }
    REVERSE(res);
    return res;
}

ll char_to_num(string col)
{
    ll res = 0;
    int power = col.size() - 1;
    for (int i = 0; i < col.size(); i++)
    {
        int temp = 1 + col[i] - 'A';
        res += (temp * pow(26, power--));
    }
    return res;
}

void solve()
{
    string st;
    cin >> st;
    string row;
    string col_s;
    ll col;
    bool flag = false;

    if (st[0] == 'R' && st[1] <= '9')
    {
        for (int i = 2; i < st.size(); i++)
        {
            if (st[i] == 'C')
            {
                flag = true;
                break;
            }
        }
    }

    if (flag)
    {
        int i = 1;
        for (i = 1; i < st.size(); i++)
        {
            if (st[i] <= '9')
                row.pb(st[i]);
            else
                break;
        }

        for (i = i + 1; i < st.size(); i++)
            col_s.pb(st[i]);

        col = str_to_num(col_s);
        col_s = num_to_str(col);

        cout << col_s << row << nl;
    }
    else
    {
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i] <= '9')
                row.pb(st[i]);
            else
                col_s.pb(st[i]);
        }
        col = char_to_num(col_s);

        cout << "R" << row << "C" << col << nl;
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