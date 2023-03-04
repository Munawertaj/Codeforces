//  https://codeforces.com/contest/1692/problem/E

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
    int size, count1;
    cin >> size >> count1;
    vii num(size + 1);
    vii index;
    for (int i = 1; i <= size; i++)
    {
        cin >> num[i];
        if (num[i] == 1)
            index.pb(i);
    }
    if (index.size() < count1)
    {
        cout << "-1" << nl;
        return;
    }

    if (count1 == index.size())
    {
        cout << "0" << nl;
        return;
    }

    int ans = 1e6, count, prev, after;
    for (int i = 0; i <= index.size() - count1; i++)
    {
        int x = i + count1 - 1;
        if (i - 1 >= 0)
            prev = index[i - 1];
        else
            prev = 0;
        if (x + 1 < index.size())
            after = size - index[x + 1] + 1;
        else
            after = 0;
        // cout << index[x] << "   " << prev << "      " << after << nl;
        count = prev + after;
        ans = min(ans, count);
    }
    cout << ans << nl;
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