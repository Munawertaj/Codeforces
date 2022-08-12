//  https://codeforces.com/contest/1097/problem/B

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
    int n;
    cin >> n;
    vii rot;
    int num;
    vii combin[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        rot.pb(num);
    }
    combin[1].pb(rot[0]);
    int clock, anti, len;
    for (int i = 1; i < n; i++)
    {
        len = combin[i].size();
        for (int j = 0; j < len; j++)
        {
            clock = rot[i] + combin[i][j];
            anti = combin[i][j] - rot[i];

            combin[i + 1].pb(clock);
            combin[i + 1].pb(anti);
        }
    }
    len = combin[n].size();
    for (int i = 0; i < len; i++)
    {
        // cout << combin[n][i] << nl;
        if (combin[n][i] == 0 || combin[n][i] % 360 == 0)
        {
            cout << "YES" << nl;
            return;
        }
    }
    cout << "NO" << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}