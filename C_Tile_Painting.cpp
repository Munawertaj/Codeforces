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
    long long int n, i, res, y, x;
    cin >> n;
    x = 0;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            x = i;
            break;
        }
    }
    if (x == 0)
        res = n;
    else
    {

        if (n % 2 == 0)
        {
            if (n < 6)
                res = n / 2;
            else
                res = 1;
        }
        else
        {
            n = n - x;
            res = x + (n / 2);
        }
    }

    cout << res << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}