/*
Date:   19 September 2022
Problem Link:   https://codeforces.com/contest/451/problem/B
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
    vll num(size);
    FOR(i, size, 1)
    {
        cin >> num[i];
    }

    int start = 0, end = 0;
    for (int i = 1; i < size; i++)
    {
        if (num[i] >= num[i - 1])
            continue;
        else
        {
            start = i - 1;
            end = i;
            for (int j = i + 1; j < size; j++)
            {
                if (num[j] > num[j - 1])
                    break;
                end = j;
            }
            break;
        }
    }
    int i = start;
    int j = end;
    while (i < j)
        swap(num[i++], num[j--]);

    for (int i = 1; i < size; i++)
    {
        if (num[i] < num[i - 1])
        {
            cout << "no";
            return;
        }
    }
    cout << "yes" << nl << start + 1 << " " << end + 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}