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
    string x, y;
    cin >> x >> y;
    string temp = x + y;

    int count[128] = {0};
    for (int i = 0; i < 4; i++)
    {
        int x = (int)temp[i];
        // cout << x << " ";
        count[x]++;
    }
    int ans;
    sort(count, count + 128);
    

    if (count[127] == 4)
        ans = 0;
    else if (count[127] == 3)
        ans = 1;
    else if (count[127] == 2)
    {
        if (count[126] == 2)
            ans = 1;
        else
            ans = 2;
    }
    else
        ans = 3;
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
    {
        solve();
    }
    return 0;
}