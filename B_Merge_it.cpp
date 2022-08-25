//  https://codeforces.com/contest/1176/problem/B

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
    int size;
    cin >> size;
    ll x;
    int count1 = 0, count2 = 0, count0 = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        if (x % 3 == 1)
            count1++;
        else if (x % 3 == 2)
            count2++;
        else
            count0++;
    }
    int res;
    if (count2 >= count1)
    {
        res = count1;
        count2 -= count1;
        res += (count2 / 3);
    }
    else
    {
        res = count2;
        count1 -= count2;
        res += (count1 / 3);
    }
    cout << res + count0 << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
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