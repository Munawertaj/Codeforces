/*
Date:   26 May 2023
Problem Link:   https://codeforces.com/problemset/problem/1618/C
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

bool check(vll num, ll div)
{
    int len = num.size();
    vii valid(len, 0);
    for (int i = 0; i < len; i++)
        if (num[i] % div == 0)
            valid[i] = 1;

    for (int i = 1; i < len; i++)
    {
        if (valid[i] == valid[i - 1])
            return false;
    }
    return true;
}

void solve()
{
    int size;
    cin >> size;
    vll num(size);
    for (int i = 0; i < size; i++)
        cin >> num[i];
    ll odd = num[1], even = num[0];
    for (int i = 2; i < size; i++)
    {
        if (i & 1)
            odd = __gcd(odd, num[i]);
        else
            even = __gcd(even, num[i]);
    }
    if (check(num, odd))
        cout << odd << nl;
    else if (check(num, even))
        cout << even << nl;
    else
        cout << "0" << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}