/*
Date:   21 June 2023
Problem Link:   https://codeforces.com/problemset/problem/846/B
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

int without_full(ll minutes, ll task, ll sub, vii &time)
{
    ll temp;
    int count = 0, i = 0;
    while (minutes && i < sub)
    {
        temp = time[i] * task;
        if (temp <= minutes)
        {
            count += task;
            minutes -= temp;
        }
        else
        {
            count += (minutes / time[i]);
            minutes = 0;
        }
        i++;
    }
    return count;
}

void solve()
{
    ll task, subtask, minutes;
    cin >> task >> subtask >> minutes;
    vii time(subtask);

    ll total = 0;
    for (int i = 0; i < subtask; i++)
    {
        cin >> time[i];
        total += time[i];
    }

    SORT(time);

    ll ans = 0;
    ll full_com, rem;
    for (int full = 0; full <= task; full++)
    {
        if (total * full > minutes)
            break;
        full_com = full * (subtask + 1);
        rem = without_full(minutes - (total * full), task - full, subtask, time);
        ans = max(ans, full_com + rem);
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    // cin>>tc;
    while (tc--)
        solve();
    return 0;
}