/*
Date:   29 March 2023
Problem Link:   https://codeforces.com/problemset/problem/316/A2
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
    vii count(10, 0);
    int ques = 0, temp;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] >= '0' && st[i] <= '9')
            continue;
        else if (st[i] == '?')
            ques++;
        else
        {
            temp = st[i] - 'A';
            count[temp] = 1;
        }
    }
    int count_char = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i])
            count_char++;
    }

    ll ans = 1, val = 10;
    if (st[0] == '?')
    {
        ans = 9;
        ques--;
    }
    else if (st[0] > '9')
    {
        ans = 9;
        count_char--;
        val--;
    }
    while (count_char)
    {
        ans *= val;
        val--;
        count_char--;
    }
    cout << ans;
    while (ques--)
        cout << "0";
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