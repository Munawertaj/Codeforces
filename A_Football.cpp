//  https://codeforces.com/problemset/problem/43/A

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
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define setdigit(n) fixed << setprecision(n)
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

void solve()
{
    int num;
    cin >> num;
    cin.ignore();
    vector<string> team;
    string name;
    int i = num;
    while (i--)
    {
        cin >> name;
        team.push_back(name);
    }
    int count = 0;
    string team1 = team[0], team2;
    for (int i = 0; i < team.size(); i++)
    {
        if (team[i] == team1)
            count++;
        else
            team2 = team[i];
    }

    if (count > (num - count))
        cout << team1 << nl;
    else
        cout << team2 << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}