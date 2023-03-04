//  https://codeforces.com/contest/1714/problem/A

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
    int number, hour, minute;
    cin >> number >> hour >> minute;
    set<int> result;
    int h, m, min, hr, res;
    while (number--)
    {
        cin >> h >> m;
        if (minute > m)
        {
            min = 60 - minute + m;
            h--;
        }
        else
            min = m - minute;

        if (hour > h)
            hr = 24 - hour + h;
        else
            hr = h - hour;

        res = hr * 60 + min;
        result.insert(res);
    }
    for (auto value : result)
    {
        hr = value / 60;
        min = value % 60;
        cout << hr << " " << min;
        break;
    }
    cout << nl;
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