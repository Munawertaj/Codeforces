//  https://codeforces.com/problemset/problem/181/B

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
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
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
    vector<pair<ll, ll>> point;
    ll x, y;
    for (int i = 0; i < size; i++)
    {
        cin >> x >> y;
        point.pb({x, y});
    }
    SORT(point);
    vii temp[2500];
    for (int i = 0; i < size; i++)
    {
        x = point[i].ff;
        y = point[i].ss;
        if (x < 0)
            x += 2000;
        temp[x].pb(y);
        // cout << x << " " << y << nl;
    }
    ll count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            x = point[i].ff + point[j].ff;
            y = point[i].ss + point[j].ss;
            if (x % 2 || y % 2)
                continue;
            x /= 2;
            y /= 2;
            if (x < 0)
                x += 2000;
            if (temp[x].size()) // checking temp[x] is empty or not
            {
                int index = uppbound(temp[x], y);
                // cout << "index:" << index << nl;
                // cout << temp[x][index - 1] << nl;
                if (temp[x][index - 1] == y)
                    count++;
            }
        }
    }
    cout << count << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}