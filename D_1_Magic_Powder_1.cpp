/*
Date:   09 August 2023
Problem Link:   https://codeforces.com/problemset/problem/670/D1
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
#define setdigit(n) fixed << setprecision(n)
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define ff first
#define ss second
#define nl "\n"
#define PI (acos(-1.0))
#define mod 1000000007
#define INF (ll)1e17
#define N 100005
using namespace std;

void solve()
{
    int size, magic;
    cin >> size >> magic;

    vector<int> need(size), have(size);
    for (int i = 0; i < size; i++)
        cin >> need[i];

    int ans = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        cin >> have[i];
        ans = min(have[i] / need[i], ans);
    }

    for (int i = 0; i < size; i++)
        have[i] -= need[i] * ans;
    
    while (magic > 0)
    {
        bool flag = false;
        for (int i = 0; i < size; i++)
        {
            if (have[i] >= need[i])
                have[i] -= need[i];
            
            else if (magic + have[i] >= need[i])
            {
                magic -= (need[i] - have[i]);
                have[i] = 0;
            }
            else
                break;
            if (i == size - 1)
                flag = true;
        }
        if (flag)
            ans++;
        else
            break;
    }
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