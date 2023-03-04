//  https://codeforces.com/problemset/problem/287/B

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

ll sum(ll num)
{
    return (num * (num + 1)) / 2;
}

void solve()
{
    ll pip, spl, res;
    cin >> pip >> spl;

    pip--;
    ll count;
    ll maximum = sum(spl - 1);

    if (pip > maximum)
        count = -1;
    else if (pip + 1 == spl)
        count = 1;
    else
    {
        ll low = 0, high = spl - 1, mid;

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (maximum - sum(mid) >= pip)
                low = mid + 1;
            else
                high = mid - 1;
        }

        count = spl - high - 1;
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}