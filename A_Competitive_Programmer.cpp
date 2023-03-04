//  https://codeforces.com/contest/1266/problem/A

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
    string st;
    cin >> st;
    int temp;
    ll sum = 0;
    int count0 = 0, count2 = 0;

    for (int i = 0; i < st.size(); i++)
    {

        temp = st[i] - '0';
        sum += temp;
        if (temp == 0)
            count0++;
        else if (temp % 2 == 0)
            count2++;
        else
            continue;
    }
    if (sum % 3 == 0 && count0 + count2 > 1 && count0 > 0)
        cout << "red" << nl;
    else
        cout << "cyan" << nl;
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