/*
Date:   26 January 2023
Problem Link:   https://codeforces.com/contest/146/problem/D
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
    int cnt4, cnt7, cnt47, cnt74;
    cin >> cnt4 >> cnt7 >> cnt47 >> cnt74;
    if (abs(cnt47 - cnt74) > 1)
    {
        cout << "-1";
        return;
    }
    if (cnt47 != cnt74)
    {
        int temp = max(cnt47, cnt74);
        if (cnt4 < temp || cnt7 < temp)
            cout << "-1";
        else
        {
            bool flag = 0;
            if (cnt74 > cnt47)
            {
                cout << "7";
                cnt7--;
                flag = true;
                cnt4--;
            }

            cnt4 -= (cnt47);
            while (cnt4)
            {
                cout << "4";
                cnt4--;
            }
            while (cnt47)
            {
                cout << "47";
                cnt47--;
                cnt7--;
            }
            while (cnt7)
            {
                cout << "7";
                cnt7--;
            }
            if (flag)
                cout << "4";
        }
    }
    else
    {
        if (cnt4 < cnt47 || cnt7 < cnt47)
            cout << "-1";
        else if (cnt4 == cnt47 && cnt7 == cnt47)
            cout << "-1";
        else
        {
            if (cnt4 == cnt47)
            {
                while (cnt4)
                {
                    cout << "74";
                    cnt4--;
                    cnt7--;
                }
                while (cnt7)
                {
                    cout << "7";
                    cnt7--;
                }
            }
            else
            {
                cnt4 -= cnt47;
                while (cnt4 > 1)
                {
                    cout << "4";
                    cnt4--;
                }
                while (cnt47)
                {
                    cout << "47";
                    cnt47--;
                    cnt7--;
                }
                while(cnt7)
                {
                    cout << "7";
                    cnt7--;
                }
                cout << "4";
            }
        }
    }
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