/*
Date:   25 August 2023
Problem Link:   https://codeforces.com/contest/1474/problem/B
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
#define setdigit(n) fixed << setprecision(n)
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define ff first
#define ss second
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 10005
using namespace std;

vector<ll> preCumpute(N, 0);

bool isPrime(ll num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

ll generatePrime(ll val)
{
    if (val % 2 == 0)
        val++;

    while (true)
    {
        if (isPrime(val))
            return val;
        val += 2;
    }
}

void solve()
{
    int diff;
    cin >> diff;
    if (preCumpute[diff])
    {
        cout << preCumpute[diff] << nl;
        return;
    }
    if (diff == 1)
    {
        cout << 6 << nl;
        return;
    }

    ll prime1, prime2;
    prime1 = generatePrime(diff + 1);
    prime2 = generatePrime(prime1 + diff);
    preCumpute[diff] = prime1 * min(prime1 * prime1, prime2);
    cout << preCumpute[diff] << nl;
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