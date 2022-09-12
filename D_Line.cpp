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
#define vSort(v) sort(v.begin(), v.end())
#define vReverseSort(v) sort(v.rbegin(), v.rend())
#define vReverse(v) reverse(v.rbegin(), v.rend())
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
    string st;
    cin >> st;
    if (n == 1)
    {
        cout << "0" << nl;
        return;
    }
    vii count1;
    vii count2;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            if (st[i] == 'L')
                count1.pb(i);
        }
        else
        {
            if (st[i] == 'R')
                count2.pb(i);
        }
        if (st[i] == 'L')
            ans += i;
        else
            ans += (n - i - 1);
    }
    // cout << ans << nl;

    vll res;
    ll temp;

    for (int i = 0; i < count1.size(); i++)
    {
        temp = (n - 2 * count1[i] - 1);
        res.pb(temp);
    }
    for (int i = 0; i < count2.size(); i++)
    {
        temp = count2[i] - (n - count2[i] - 1);
        res.pb(temp);
    }
    vReverseSort(res);
    int i;
    for (i = 0; i < res.size(); i++)
    {
        ans += res[i];
        cout << ans << " ";
    }

    while (i < n)
    {
        cout << ans << " ";
        i++;
    }

    cout << nl;
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