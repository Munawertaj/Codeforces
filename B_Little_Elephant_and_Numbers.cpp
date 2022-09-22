/*
Date:   22 September 2022
Problem Link:   https://codeforces.com/problemset/problem/221/B
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

vii digits(10, 0);

bool check(ll num, ll digit)
{
    vii temp(10, 0);
    while (digit)
    {
        int rem = digit % 10;
        temp[rem] = 1;
        digit /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (digits[i] == temp[i] && digits[i] == 1)
            return true;
    }
    return false;
}

void solve()
{
    ll num;
    cin >> num;
    vll divisor;
    ll temp = num;
    ll ans = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        digits[rem] = 1;
        temp /= 10;
    }

    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisor.pb(i);
            if (i * i == num)
                break;
            divisor.pb(num / i);
        }
    }

    for (int i = 0; i < divisor.size(); i++)
    {
        if (check(num, divisor[i]))
            ans++;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}