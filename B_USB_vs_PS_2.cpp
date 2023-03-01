/*
Date:   01 March 2023
Problem Link:   https://codeforces.com/contest/762/problem/B
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
    ll usb, ps, both;
    cin >> usb >> ps >> both;
    int mouse;
    cin >> mouse;
    vii usb_m, ps_m;
    ll cost;
    string type;
    for (int i = 0; i < mouse; i++)
    {
        cin >> cost >> type;
        if (type == "USB")
            usb_m.pb(cost);
        else
            ps_m.pb(cost);
    }
    RSORT(usb_m);
    RSORT(ps_m);
    ll total = 0, count = 0;
    while (usb-- && usb_m.size())
    {
        total += usb_m.back();
        usb_m.pop_back();
        count++;
    }
    while (ps-- && ps_m.size())
    {
        total += ps_m.back();
        ps_m.pop_back();
        count++;
    }

    while (both--)
    {
        if (usb_m.size() && ps_m.size())
        {
            if (usb_m.back() > ps_m.back())
            {
                total += ps_m.back();
                ps_m.pop_back();
            }
            else
            {
                total += usb_m.back();
                usb_m.pop_back();
            }
        }
        else if (usb_m.size())
        {
            total += usb_m.back();
            usb_m.pop_back();
        }
        else if (ps_m.size())
        {
            total += ps_m.back();
            ps_m.pop_back();
        }
        else
            break;
        count++;
    }

    cout << count << " " << total;
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