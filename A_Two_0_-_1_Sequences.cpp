//  https://codeforces.com/contest/1704/problem/A

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
    int size1, size2;
    string first, second;
    cin >> size1 >> size2;
    cin >> first >> second;

    if (size1 == size2)
    {
        if (first == second)
        {
            cout << "YES" << nl;
            return;
        }
        else
        {
            cout << "NO" << nl;
            return;
        }
    }

    string temp1 = first.substr(size1 - size2 + 1, size2 - 1);
    string temp2 = second.substr(1, size2 - 1);
    // cout << temp1 << nl;
    for (int i = 0; i < size1; i++)
    {
        if (first[i] == second[0])
        {
            if (size2 == 1)
            {
                cout << "YES" << nl;
                return;
            }
            if (i <= (size1 - size2) && temp1 == temp2)
            {
                cout << "YES" << nl;
                return;
            }
        }
    }
    cout << "NO" << nl;
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