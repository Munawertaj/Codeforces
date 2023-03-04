//  https://codeforces.com/contest/1295/problem/C

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
#define vSort(v) sort(v.begin(), v.end())
#define vReverseSort(v) sort(v.rbegin(), v.rend())
#define vReverse(v) reverse(v.rbegin(), v.rend())
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
    string seq, fin;
    cin >> seq >> fin;
    vii count[130];
    for (int i = 0; i < seq.size(); i++)
    {
        int x = seq[i];
        count[x].pb(i);
    }

    int temp = fin[0], curr;

    if (count[temp].size())
        curr = count[temp][0];
    else
    {
        cout << "-1" << nl;
        return;
    }

    int ans = 1;
    curr++;
    for (int i = 1; i < fin.size(); i++)
    {
        int x = fin[i];

        if (count[x].size() == 0)
        {
            cout << "-1" << nl;
            return;
        }

        int index = lower_bound(count[x].begin(), count[x].end(), curr) - count[x].begin();

        // cout << "CURR=" << curr << "ANS=" << ans << " INDEX=" << index << nl;

        if (index < count[x].size())
        {
            curr = count[x][index] + 1;
        }
        else
        {
            curr = count[x][0]+1;
            ans++;
        }
    }
    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}