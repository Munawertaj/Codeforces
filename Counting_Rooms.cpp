//  https://cses.fi/problemset/task/1192/

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
#define vss vector<string>
#define matrix(x) vector<vector<x>>
#define ff first
#define ss second
#define ms(a, b) memset(a, b, sizeof(a))
#define PI (2 * acos(0.0))
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define INF (ll)1e17
#define nl endl
#define N 100005
using namespace std;

bool vis[1001][1001];
char arr[1001][1001];
int row, col;

bool isValid(int x, int y)
{
    if (x < 1 || x > row || y < 1 || y > col)
        return false;

    if (vis[x][y] == true || arr[x][y] == '#')
        return false;

    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = true;

    // cout << x << " " << y << endl;

    if (isValid(x - 1, y))
        dfs(x - 1, y); // Up

    if (isValid(x, y + 1))
        dfs(x, y + 1); // Right

    if (isValid(x + 1, y))
        dfs(x + 1, y); // Down

    if (isValid(x, y - 1))
        dfs(x, y - 1); // left
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    row = n;
    col = m;

    int count = 0;
    // cout << count << nl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == '.' && vis[i][j] == false)
            {
                count++;
                dfs(i, j);
            }
        }
    }
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    solve();
    return 0;
}