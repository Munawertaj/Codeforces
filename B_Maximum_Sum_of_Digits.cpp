/*
Date:   31 May 2023
Problem Link:   https://codeforces.com/problemset/problem/1060/B
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

int digit_sum(ll num)
{
    int sum = 0;
    while (num)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int digit(ll num)
{
    int dig = 0;
    while (num)
    {
        num /= 10;
        dig++;
    }
    return dig;
}

void solve()
{
    ll num;
    cin >> num;
    if (num < 10)
    {
        cout << num;
        return;
    }
    ll temp = digit(num) - 1;
    ll a, b;
    string st;
    for (ll i = 0; i < temp; i++)
        st.pb('9');

    a = stoll(st);
    b = num - a;
    cout << digit_sum(a) + digit_sum(b);
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