/*
Date:   12 February 2023
Problem Link:   https://codeforces.com/problemset/problem/1157/C1
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

string generate(int i, int j, int previous, vii &num)
{
    string ans;
    if (i)
        ans = "L";
    else
        ans = "R";
    while (i <= j)
    {
        if (previous > num[i] && previous > num[j])
            break;
        else
        {
            if (previous < num[i] && previous < num[j])
            {
                if (num[i] < num[j])
                {
                    previous = num[i];
                    i++;
                    ans.pb('L');
                }
                else if (num[i] > num[j])
                {
                    previous = num[j];
                    j--;
                    ans.pb('R');
                }
            }
            else if (previous < num[i])
            {
                previous = num[i];
                i++;
                ans.pb('L');
            }
            else
            {
                previous = num[j];
                j--;
                ans.pb('R');
            }
        }
    }
    return ans;
}

void solve()
{
    int size;
    cin >> size;
    vii num(size);
    for (int i = 0; i < size; i++)
        cin >> num[i];

    string ans1, ans2;
    ans1 = generate(1, size - 1, num[0], num);
    ans2 = generate(0, size - 2, num[size - 1], num);
    // cout << ans1 << " " << ans2;

    if (ans1.size() >= ans2.size())
        cout << ans1.size() << nl << ans1;
    else
        cout << ans2.size() << nl << ans2;
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