/*
Date:   29 April 2023
Problem Link:   https://codeforces.com/problemset/problem/978/D
Author: Tareq Munawer Taj
CSE, Rajshahi University
*/

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
#define FOR(i, n, x) for (int i = 0; i < n; i = i + x)
#define FORR(i, n, x) for (int i = n; i >= 0; i = i - x)
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
#define matrix(x) vector<vector<x>>
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define ff first
#define ss second
#define YES printf("YES\n")
#define NO printf("NO\n")
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 100005
using namespace std;

void solve()
{
    int size;
    cin >> size;
    vii num(size);
    for (int i = 0; i < size; i++)
        cin >> num[i];

    if (size < 3)
    {
        cout << "0";
        return;
    }

    int ans = size + 1, x, y, diff, count;
    for (int i = -1; i < 2; i++)
    {
        x = num[0] + i;
        for (int j = -1; j < 2; j++)
        {
            count = 0;
            y = num[1] + j;
            diff = x - y;
            if (i != 0)
                count++;
            if (j != 0)
                count++;
            int k, d;
            for (k = 2; k < size; k++)
            {
                y -= diff;
                d = abs(num[k] - y);
                if (d > 1)
                    break;
                else if (d == 1)
                    count++;
            }
            if (k == size)
                ans = min(ans, count);
        }
    }
    if (ans > size)
        ans = -1;
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin >> tc;
    while (tc--)
        solve();
    return 0;
}
