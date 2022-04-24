//  https://codeforces.com/contest/1669/problem/A

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
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve(int rating)
{
    if (rating >= 1900)
        cout << "Division 1" << nl;
    else if (rating <= 1899 && rating >= 1600)
        cout << "Division 2" << nl;
    else if (rating <= 1599 && rating >= 1400)
        cout << "Division 3" << nl;
    else
        cout << "Division 4" << nl;
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
        int rat;
        cin >> rat;
        solve(rat);
    }
    return 0;
}