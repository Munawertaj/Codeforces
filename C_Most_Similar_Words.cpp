//  https://codeforces.com/contest/1676/problem/C

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
    int num, size;
    cin >> num >> size;
    vii count;
    string word;
    vector<string> wr;
    int temp;
    for (int i = 0; i < num; i++)
    {
        cin >> word;
        wr.pb(word);
    }
    ll res = INF;
    for (int i = 0; i < num - 1; i++)
    {
        for (int k = i + 1; k < num; k++)
        {
            temp = 0;
            for (int j = 0; j < size; j++)
            {
                int x = abs(wr[i][j] - wr[k][j]);
                temp += x;
            }
            if (temp < res)
                res = temp;
        }
    }

    cout << res << nl;
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