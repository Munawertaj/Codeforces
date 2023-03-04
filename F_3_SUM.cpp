//  https://codeforces.com/problemset/problem/1692/F

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
    ll count[10] = {0};
    int size;
    cin >> size;
    ll num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        count[num[i] % 10]++;
    }
    vii res;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            for (int j = 0; j < count[i]; j++)
            {
                res.pb(i);
                if (j == 2)
                    break;
            }
        }
    }
    for (int i = 0; i < res.size() - 2; i++)
    {
        for (int j = i + 1; j < res.size() - 1; j++)
        {
            for (int k = j + 1; k < res.size(); k++)
            {
                if ((res[i] + res[j] + res[k]) % 10 == 3)
                {
                    cout << "YES" << nl;
                    return;
                }
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
        solve();
    return 0;
}