//  https://codeforces.com/problemset/problem/1721/C

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
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
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
    vii first;
    vii second;
    vii max_result;
    ll temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        first.pb(temp);
    }
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        second.pb(temp);
    }
    for (int i = 0; i < size; i++)
    {
        temp = lowbound(second, first[i]);
        cout << second[temp] - first[i] << " ";
    }
    cout << nl;
    int index = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        max_result.pb(second[index] - first[i]);
        if (first[i] > second[i - 1])
            index = i - 1;
    }
    for (int i = size - 1; i >= 0; i--)
        cout << max_result[i] << " ";
    cout << nl;
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