// https://cses.fi/problemset/task/1666

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

vector<vector<int>> Connected_Comp;
vector<int> Current_Connected_Comp;

void dfs(int vertex)
{
    vis[vertex] = true;
    Current_Connected_Comp.push_back(vertex);

    for (auto child : g[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}

void solve()
{
    int node, edge;
    cin >> node >> edge;
    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= node; i++)
    {
        if (vis[i])
            continue;

        Current_Connected_Comp.clear(); // Clear previous connected components
        dfs(i);
        Connected_Comp.push_back(Current_Connected_Comp); // Add current connected components to the vector
    }
    // number of connected components
    int count = Connected_Comp.size();
    cout << count - 1 << nl;

    for (int i = 1; i < count; i++)
    {
        // cout << "Connected Component " << i + 1 << ": ";
        cout << Connected_Comp[i - 1][0] << " " << Connected_Comp[i][0] << nl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}