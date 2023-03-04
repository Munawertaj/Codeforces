/*
Date:   12 September 2022
Problem Link:   https://codeforces.com/problemset/problem/327/A
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
#define REVSORT(v) sort(v.rbegin(), v.rend())
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
    int count1 = 0, seq = 0, count = 0, x;

    FOR(i, size, 1)
    {
        cin >> x;
        num.pb(x);
        if (x == 0)
            count++;
        else
        {
            count1++;
            seq = max(seq, count);
            count = 0;
        }
    }
    if (count1 == size)
    {
        cout << size - 1 << nl;
        return;
    }
    int first0, last, ans1, ans2;
    ans1 = count1 + seq;
    vector<pii> index(size);
    int cnt0 = 0, cnt1 = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (num[i] == 1)
            cnt1++;
        else
        {
            cnt0++;
            first0 = i;
        }

        index[i] = {cnt0, cnt1};
    }
    int x, y;
    for (int i = first0; i < size; i++)
    {
        x = index[i].ff;
        y = index[i].ss;
        
    }

    cout << max(ans1, ans2) << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}