/*
Date:   07 January 2023
Problem Link:   https://codeforces.com/contest/2/problem/A
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
    int round;
    cin >> round;
    vector<pair<string, int>> game(round);
    map<string, int> player;
    string res, name;
    vector<string> winners;
    int maximum = -1, point;
    for (int i = 0; i < round; i++)
    {
        cin >> name >> point;
        game[i] = {name, point};
        player[name] += point;
    }

    for (auto x : player)
    {
        point = x.ss;
        if (point > maximum)
            maximum = point;
    }
    int count = 0;
    for (auto x : player)
    {
        name = x.ff;
        point = x.ss;
        // cout << name << "==" << x.ss << nl;
        if (point == maximum)
            winners.pb(name);
    }
    if (winners.size() == 1)
        cout << winners[0];
    else
    {
        player.clear();
        for (auto x : game)
        {
            name = x.ff;
            point = x.ss;
            player[name] += point;
            if (player[name] >= maximum)
            {
                for(auto x: winners)
                {
                    if(x==name)
                    {
                        cout << name;
                        return;
                    }
                }
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