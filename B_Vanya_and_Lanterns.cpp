
//  https://codeforces.com/problemset/problem/492/B

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
    ll num, lan;
    cin >> num >> lan;
    vll location;
    ll x;
    for (int i = 0; i < num; i++)
    {
        cin >> x;
        location.pb(x);
    }
    vSort(location);

    long double max1 = 0, temp = 0;

    if (location[0] != 0)
        max1 = location[0];
    if (location[num - 1] != lan)
    {
        temp = lan - location[num - 1];
        if (max1 + location[num - 1] > lan)
            temp = (lan - location[num - 1]) / 2.0;
    }
    max1 = max(max1, temp);

    for (int i = 1; i < num; i++)
    {
        temp = (location[i] - location[i - 1]) / 2.0;
        if (temp > max1)
            max1 = temp;
    }
    cout << setdigit(10) << max1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}