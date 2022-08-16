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
    ll num, k;
    cin >> num >> k;

    if (k % 2 != 0)
    {
        cout << "YES" << nl;
        for (int i = 1; i < num; i += 2)
            cout << i << " " << i + 1 << nl;
    }
    else
    {
        if (k % 4 == 0)
            cout << "NO" << nl;
        else
        {
            cout << "YES" << nl;
            for (int i = 3; i < num; i += 4)
                cout << i << " " << i + 1 << nl;
                
            for (int i = 2; i <= num; i += 4)
                cout << i << " " << i - 1 << nl;
        }
    }
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