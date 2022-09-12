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
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << "No" << nl;
        return;
    }
    if (m % n == 0)
    {
        cout << "Yes" << nl;
        for (int i = 0; i < n; i++)
            cout << m / n << " ";
        cout << nl;
        return;
    }
    else
    {
        if(n%2==0 && m%2==1)
        {
            cout<<"No"<<nl;
            return;
        }
        if (n % 2 == 0)
        {
            cout << "Yes" << nl;
            for (int i = 0; i < n - 2; i++)
                cout << "1 ";

            ll temp = m - n + 2;
            cout << temp / 2 << " " << temp / 2 << nl;
        }
        else
        {
            cout << "Yes" << nl;

            for (int i = 0; i < n - 1; i++)
                cout << "1 ";
            cout << m - n + 1 << nl;
            return;
        }
    }
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