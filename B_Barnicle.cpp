/*
Date:   26 March 2023
Problem Link:   https://codeforces.com/problemset/problem/697/B
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
    char dec, ch;
    string fraction;
    cin >> dec >> ch >> fraction;
    int power;
    string temp;
    while (1)
    {
        if (fraction.back() == 'e')
        {
            fraction.pop_back();
            break;
        }
        temp.pb(fraction.back());
        fraction.pop_back();
    }
    REVERSE(temp);
    power = stoi(temp);
    int extra = power - fraction.size();
    for (int i = 0; i < extra; i++)
        fraction.pb('0');

    // cout << dec << " " << fraction << " " << power;
    string before, after;
    before.pb(dec);
    int i = 0;
    for (i = 0; i < power; i++)
        before.pb(fraction[i]);

    while (i < fraction.size())
    {
        after.pb(fraction[i]);
        i++;
    }

    REVERSE(before);

    while (after.size() && after.back() == '0')
        after.pop_back();

    while (before.size() > 1 && before.back() == '0')
        before.pop_back();

    REVERSE(before);
    cout << before;
    if (after.size())
        cout << "." << after;
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