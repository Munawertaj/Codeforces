//  https://codeforces.com/problemset/problem/25/A

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
    int size, num, even = 0, odd = 0, check;
    cin >> size;
    int arr[size + 1];
    for (int i = 1; i <= size; i++)
    {
        cin >> num;
        arr[i] = num;
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even > odd)
        check = 1;
    else
        check = 0;
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] % 2 == check)
        {
            cout << i << nl;
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}