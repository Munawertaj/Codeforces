//  https://codeforces.com/problemset/problem/1251/C

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
#define qii queue<int>
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
    string num;
    cin >> num;
    size = num.size();
    int x;
    qii even;
    qii odd;
    for (int i = 0; i < size; i++)
    {
        x = num[i] - '0';
        if (x % 2 == 0)
            even.push(x);
        else
            odd.push(x);
    }
    int ev, od;
    while (even.size() > 0 && odd.size() > 0)
    {
        ev = even.front();
        od = odd.front();
        if (ev < od)
        {
            cout << ev;
            even.pop();
        }
        else
        {
            cout << od;
            odd.pop();
        }
    }
    while (even.size())
    {
        cout << even.front();
        even.pop();
    }
    while (odd.size())
    {
        cout << odd.front();
        odd.pop();
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