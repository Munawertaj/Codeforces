//  https://codeforces.com/problemset/problem/1520/D

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
    int size;
    cin >> size;
    vll pos_count(size + 1, 0);
    vll neg_count(size + 1, 0);
    vll num(size + 1);
    ll temp;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        int temp = num[i] - i;
        if (temp >= 0)
            pos_count[temp]++;
        else
        {
            temp = temp * (-1);
            neg_count[temp]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i <= size; i++)
    {
        temp = pos_count[i];
        ans += ((temp * (temp - 1)) / 2);
        temp = neg_count[i];
        ans += ((temp * (temp - 1)) / 2);
    }
    cout << ans << nl;
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