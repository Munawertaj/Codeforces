//  https://codeforces.com/contest/4/problem/B

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
    int day, total;
    cin >> day >> total;
    int maximum[day], minimum[day];
    int max = 0, min = 0;
    for (int i = 0; i < day; i++)
    {
        cin >> minimum[i] >> maximum[i];
        max += maximum[i];
        min += minimum[i];
    }
    if (total < min || total > max)
        cout << "NO" << nl;
    else
    {
        cout << "YES" << nl;
        total -= min;
        for (int i = 0; i < day; i++)
        {
            if (total > (maximum[i] - minimum[i]))
            {
                cout << maximum[i] << " ";
                total -= (maximum[i] - minimum[i]);
            }

            else if (total == 0)
                cout << minimum[i] << " ";
            else
            {
                cout << minimum[i] + total << " ";
                total = 0;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}