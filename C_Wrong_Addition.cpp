//  https://codeforces.com/problemset/problem/1619/C

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
    ull num1, sum, rem1, rem2;
    bool flag = true;
    vull result;
    cin >> num1 >> sum;
    while (num1 > 0)
    {
        rem1 = num1 % 10;
        rem2 = sum % 10;

        // cout << rem1 << "  " << rem2<<"  ";

        if (sum == 0)
        {
            cout << "-1" << nl;
            return;
        }

        if (rem1 <= rem2)
        {
            result.pb(rem2 - rem1);

            num1 /= 10;
            sum /= 10;
        }
        else
        {
            if (sum % 100 > 18 || sum % 100 < 10)
            {
                cout << "-1" << nl;
                return;
            }
            rem2 = sum % 100;
            result.pb(rem2 - rem1);
            num1 /= 10;
            sum /= 100;
        }
    }
    if (sum > 0)
        result.pb(sum);

    int len = result.size() - 1;
    while (1)
    {
        if (result[len--] > 0)
            break;
    }
    for (int i = len + 1; i >= 0; i--)
    {
        cout << result[i];
    }
    cout << nl;
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