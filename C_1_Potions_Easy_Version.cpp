//  https://codeforces.com/contest/1526/problem/C1

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
    vll num;
    ll x;
    ll count = 0, sum = 0;

    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> x;
        num.pb(x);
    }

    priority_queue<ll, vector<ll>, greater<ll>> val;
    for (int i = 0; i < size; i++)
    {

        sum += num[i];
        count++;
        val.push(num[i]);

        if (sum < 0)
        {
            int temp = val.top();
            sum -= temp;
            val.pop();
            count--;
        }

        // cout << "Sum=" << sum << nl;
        // cout << "Count=" << count << nl;
    }
    cout << count << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}