/*
Date:   01 October 2022
Problem Link:   https://codeforces.com/problemset/problem/1409/D
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
    ll n, sum;
    cin >> n >> sum;
    int digit = 0;

    string num = to_string(n);
    // cout << "NUM=" << num << nl;

    for (int i = 0; i < num.size(); i++)
        digit += (num[i] - '0');
    if (digit <= sum)
    {
        cout << "0" << nl;
        return;
    }
    digit = 0;
    int i = 0;
    for (i = 0; i < num.size(); i++)
    {
        digit += (num[i] - '0');
        if (digit >= sum)
            break;
    }

    num = "0" + num;
    i++;
    int carry = 1, x = i - 1;
    while (carry)
    {
        if (num[x] == '9')
        {
            num[x] = '0';
            carry = 1;
        }
        else
        {
            num[x] += 1;
            carry = 0;
        }
        x--;
    }
    while (i < num.size())
        num[i++] = '0';

    ull res = stoull(num);
    // cout << "RES=" << res << nl;
    cout << res - n << nl;
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