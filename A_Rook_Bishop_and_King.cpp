//  https://codeforces.com/problemset/problem/370/A

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

int Rock(int r1, int c1, int r2, int c2)
{
    if (r1 == r2 || c1 == c2)
        return 1;
    else
        return 2;
}

int Bishop(int r1, int c1, int r2, int c2)
{
    if ((r1 + c1) % 2 == (r2 + c2) % 2)
    {
        if (abs(r1 - r2) == abs(c1 - c2))
            return 1;
        else
            return 2;
    }
    else
        return 0;
}

int King(int r1, int c1, int r2, int c2)
{
    return max(abs(r1 - r2), abs(c1 - c2));
}

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int rock, bishop, king;

    if (a == x && b == y)
    {
        cout << "0 0 0";
        return;
    }

    rock = Rock(a, b, x, y);
    bishop = Bishop(a, b, x, y);
    king = King(a, b, x, y);

    cout << rock << " " << bishop << " " << king;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}