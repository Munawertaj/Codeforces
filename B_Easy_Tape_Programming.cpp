/*
Date:   22 April 2023
Problem Link:   https://www.codeforces.com/contest/239/problem/B
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

string remove(string st, int index)
{
    string ans;
    for (int i = 0; i < st.size(); i++)
    {
        if (i == index)
            continue;
        ans.pb(st[i]);
    }
    return ans;
}

bool check(string st)
{
    int count = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] > '9')
            continue;
        count++;
    }
    if (count)
        return true;
    else
        return false;
}

void solve()
{
    int length, query;
    cin >> length >> query;
    string sequence, temp;
    cin >> sequence;
    int l, r;
    while (query--)
    {
        vii count(10, 0);
        cin >> l >> r;
        l--;
        temp = sequence.substr(l, r - l);

        int cp = 0, ch;
        int dp = 1;
        bool del = false;
        while (check(temp))
        {
            del = false;
            // cout << temp << nl;
            if (temp[cp] <= '9')
            {
                ch = temp[cp] - '0';
                count[ch]++;
                temp[cp]--;
                if (ch == 0)
                    del = true;
            }
            else
            {
                if (temp[cp] == '>')
                    dp = 1;
                else
                    dp = -1;
                if ((cp + dp < temp.size() || cp + dp > 0 ) && temp[cp + dp] > '9')
                    del = true;
            }

            if (cp + dp >= temp.size() || cp + dp < 0)
                break;
            else
            {
                if (del)
                {
                    temp = remove(temp, cp);
                    if (dp < 0)
                        cp--;
                }
                else
                    cp += dp;
            }
        }
        for (int j = 0; j < 10; j++)
            cout << count[j] << " ";
        cout << nl;
    }
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