/*
Date:   05 February 2023
Problem Link:   https://codeforces.com/contest/1029/problem/A
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

string sub_generate(int start, int finish, string st)
{
    string res;
    while (start <= finish)
    {
        res.pb(st[start]);
        start++;
    }
    return res;
}

void solve()
{
    int size, number;
    cin >> size >> number;
    string st;
    cin >> st;
    string temp1, temp2, temp = st;
    size--;
    for (int i = 1; i <= size; i++)
    {
        if (st[i] == st[0])
        {
            temp1 = sub_generate(i, size, st);
            temp2 = sub_generate(0, size - i, st);
            if (temp1 == temp2)
            {
                temp = sub_generate(temp1.size(), size, st);
                break;
            }
        }
    }

    cout << st;
    for (int i = 1; i < number; i++)
        cout << temp;
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