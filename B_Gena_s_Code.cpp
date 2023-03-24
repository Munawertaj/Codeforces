/*
Date:   24 March 2023
Problem Link:   https://codeforces.com/problemset/problem/614/B
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

bool is_beautiful(string num)
{
    int count_1 = 0, count_0 = 0, count_others = 0;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == '0')
            count_0++;
        else if (num[i] == '1')
            count_1++;
        else
            count_others++;
    }
    if (count_1 > 1 || count_others)
        return false;
    else
        return true;
}

void solve()
{
    int size;
    cin >> size;
    string num, not_beautiful = "1";
    ll count = 0;
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        if (num == "0")
        {
            cout << "0";
            return;
        }
        if (flag && !is_beautiful(num))
        {
            not_beautiful = num;
            flag = false;
        }
        else
            count += (num.size() - 1);
    }

    cout << not_beautiful;
    for (int i = 0; i < count; i++)
        cout << "0";
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