//  https://codeforces.com/contest/1669/problem/C

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

void solve()
{
    int n;
    cin >> n;
    string ch1, ch2;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    if (arr[1] & 1)
        ch1 = "odd";
    else
        ch1 = "even";

    if (arr[2] & 1)
        ch2 = "odd";
    else
        ch2 = "even";

    for (int i = 3; i <= n; i++)
    {
        if (i & 1)
        {
            if (ch1 == "odd")
            {
                if (arr[i] % 2 == 0)
                {
                    cout << "NO" << nl;
                    return;
                }
            }
            else
            {
                if (arr[i] % 2 != 0)
                {
                    cout << "NO" << nl;
                    return;
                }
            }
        }
        else
        {
            if (ch2 == "odd")
            {
                if (arr[i] % 2 == 0)
                {
                    cout << "NO" << nl;
                    return;
                }
            }
            else
            {
                if (arr[i] % 2 != 0)
                {
                    cout << "NO" << nl;
                    return;
                }
            }
        }
    }
    cout << "YES" << nl;
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