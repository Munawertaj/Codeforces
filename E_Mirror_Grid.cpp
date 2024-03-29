//  https://codeforces.com/contest/1703/problem/E

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
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin() + 1
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin() + 1
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
    char grid[size + 1][size + 1];
    for (int i = 1; i <= size; i++)
        for (int j = 1; j <= size; j++)
            cin >> grid[i][j];
    int count1 = 0, count0 = 0;
    int x = 1, z;
    int res = 0;
    // cout << "SIZE=" << size << nl;
    while (size - x > 0)
    {
        int i = x;
        int y = 0;
        for (i; i < size; i++)
        {
            count0 = 0;

            if (grid[x][i] == '0')
                count0++;
            if (grid[i][size] == '0')
                count0++;
            if (grid[size][size - y] == '0')
                count0++;
            if (grid[size - y][x] == '0')
                count0++;
            // cout << x << " " << i << nl << i << " " << size << nl << size << " " << size - y << nl << size - y << " " << x << nl << nl;

            if (count0 == 2)
                res += 2;
            else if (count0 == 3 || count0 == 1)
                res += 1;
            else
                res = res;
            y++;
        }
        x++;
        size--;
    }
    cout << res << nl;
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