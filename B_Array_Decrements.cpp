//  https://codeforces.com/contest/1690/problem/B

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

bool solve()
{
    int size;
    cin >> size;
    ll a[size], b[size], diff[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    for (int i = 0; i < size; i++)
        cin >> b[i];

    if (size == 1)
    {
        if (a[0] >= b[0])
            return true;
        else
            return false;
    }
    ll check;
    bool check0 = false;
    for (int i = 0; i < size; i++)
    {
        diff[i] = a[i] - b[i];
        if (a[i] > b[i] && b[i] != 0)
            check = diff[i];
        if (diff[i] != 0)
            check0 = true;
    }
    if (check0 == false)
        return true;

    for (int i = 0; i < size; i++)
    {
        if (check != diff[i])
        {
            if (b[i] != 0)
                return false;
            else
            {
                if (diff[i] > check)
                    return false;
            }
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    bool result;
    while (tc--)
    {
        result = solve();

        if (result == true)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}