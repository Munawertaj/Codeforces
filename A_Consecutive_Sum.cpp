/*
Date:   07 January 2023
Problem Link:   https://codeforces.com/problemset/problem/1733/A
Author: Tareq Munawer Taj
CSE, Rajshahi University
*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vii vector<int>
#define vll vector<ll>
#define vull vector<ull>
#define SORT(v) sort(v.begin(), v.end())
#define RSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin()
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin()
#define ff first
#define ss second
#define nl "\n"
using namespace std;

void solve()
{
    int size, k;
    cin >> size >> k;
    vll num(size);
    for (int i = 0; i < size; i++)
        cin >> num[i];

    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        ll maximum = num[i];
        for (int j = i; j < size; j = j + k)
        {
            maximum = max(num[j], maximum);
        }
        sum += maximum;
    }
    cout << sum << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}