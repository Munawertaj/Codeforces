//  https://codeforces.com/problemset/problem/515/C

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
#define ReverseSort(v) sort(v.rbegin(), v.rend())
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
    string st, res;
    cin >> st;
    for (int i = 0; i < size; i++)
    {
        if (st[i] == '4')
            res += "322";
        else if (st[i] == '6')
            res += "53";
        else if (st[i] == '8')
            res += "7222";
        else if (st[i] == '9')
            res += "7332";
        else if (st[i] == '0' || st[i] == '1')
            continue;
        else
            res += st[i];
    }
    ReverseSort(res);

    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}