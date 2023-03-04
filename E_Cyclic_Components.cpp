//  https://codeforces.com/problemset/problem/977/E

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb(x) push_back(x)
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
#define INF (ll)1e17
#define mod 1000000007
#define MOD(a, b) (a % b + b) % b
#define lcm(a, b) ((a) * ((b) / __gcd(a, b)))
#define nl "\n"
using namespace std;
const int N = 1e5 + 5;
vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    vis[vertex] = true;
    int last;
    for (auto child : g[vertex])
    {
        last = child;
        if (vis[child])
            continue;
        dfs(child);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int node, edge;
    // cout << "Enter the number of nodes and edges" << nl;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= node; i++)
    {
        if (vis[i])
            continue;
        dfs(i);
        count++;
    }
    cout << count << nl;
    return 0;
}