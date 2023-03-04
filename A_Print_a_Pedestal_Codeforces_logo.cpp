//  https://codeforces.com/contest/1690/problem/A

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    ll num;
    cin >> num;
    ll max, min, mid;

    if (num % 3 == 0)
    {
        max = (num / 3) + 1;
        mid = max - 1;
    }
    else if (num % 3 == 1)
    {
        max = (num / 3) + 2;
        mid = max - 2;
    }
    else
    {
        max = (num / 3) + 2;
        mid = max - 1;
    }

    min = num - max - mid;

    cout << mid << " " << max << " " << min << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}