//  https://codeforces.com/problemset/problem/1669/F

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
    int size;
    cin >> size;
    int weight[size];

    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> weight[i];
    }
    int i = 0, j = size - 1;
    int res = 0;
    while (i <= j)
    {
        // cout << "RES=" << res << nl;
        if (sum1 < sum2)
            sum1 += weight[i++];
        else
            sum2 += weight[j--];

        if (sum1 == sum2)
            res = max(res, (i + size - 1 - j));
    }
    cout << res << nl;
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