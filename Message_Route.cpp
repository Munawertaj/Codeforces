//  https://cses.fi/problemset/task/1667/

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

vector<ll> g[N];
bool vis[N];
ll level[N];
ll parent[N];

void bfs(ll src)
{
    queue<ll> q;
    vis[src] = true;
    level[src] = 0;
    parent[src] = -1;

    q.push(src);

    while (!q.empty())
    {
        ll curr_v = q.front();
        q.pop();

        for (auto child : g[curr_v])
        {
            if (vis[child])
                continue;

            q.push(child);
            vis[child] = true;
            level[child] = level[curr_v] + 1;
            parent[child] = curr_v;
        }
    }
}
void path(ll src, ll dest)
{
    if (vis[dest] == false)
        cout << "IMPOSSIBLE";
    else
    {
        stack<ll> st;
        ll x = dest;
        while (x != -1)
        {
            st.push(x);
            x = parent[x];
        }
        cout << level[dest] + 1 << nl;

        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
}
void solve()
{
    ll node, edge;
    cin >> node >> edge;
    for (ll i = 0; i < edge; i++)
    {
        ll x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    bfs(1);
    path(1, node);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
