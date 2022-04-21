//  https://codeforces.com/contest/20/problem/C

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
#define N 100005
using namespace std;
 
vector<pair<ll, ll>> g[N];
priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
bool vis[N];
ll dist[N];
ll par[N];
 
void Path(ll dest)
{
    if (dist[dest] == INF)
        cout << "-1" << nl;
    else
    {
        stack<ll> st;
        while (dest != -1)
        {
            st.push(dest);
            dest = par[dest];
        }
        while (st.size())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
}
 
void dijkstra(ll source, ll node)
{
    for (ll i = 1; i <= node; i++)
        dist[i] = INF;
 
    dist[source] = 0;
    par[source] = -1;
    q.push({0, source});
    while (!q.empty())
    {
        ll first_node = q.top().second; // Second element is node
        q.pop();
 
        if (vis[first_node])
            continue;
        vis[first_node] = true;
 
        for (auto child : g[first_node])
        {
            ll second_node = child.first; // Child Node
            ll wt = child.second;         // Distance
 
            if (dist[first_node] + wt < dist[second_node])
            {
                dist[second_node] = dist[first_node] + wt;
                q.push({dist[second_node], second_node});
                par[second_node] = first_node;
            }
        }
    }
}
 
void distan(ll n)
{
    for (ll i = 1; i <= n; i++)
        cout << dist[i] << "  ";
}
 
void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= m; i++)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        g[a].push_back({b, w});
        g[b].push_back({a, w});
    }
    dijkstra(1, n);
    // distan(n);
    Path(n);
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
