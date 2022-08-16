//  https://codeforces.com/contest/1712/problem/C

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
    int size, a;
    cin >> size;
    vii num;
    int count[size + 1] = {0};
    int dist = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        num.pb(a);
        count[a]++;
        if (count[a] == 1)
            dist++;
    }

    // cout << "Dist=" << dist << nl;
    // return;

    vii temp;
    temp.pb(num[size - 1]);
    count[num[size - 1]]--;
    int x;

    for (int i = size - 2; i >= 0; i--)
    {
        x = temp.size();

        if (num[i] > temp[x - 1])
        {
            if (count[temp[x - 1]] != 0)
                temp.pop_back();
            break;
        }
        else if (num[i] == temp[x - 1])
            count[num[i]]--;
        else
        {
            if (count[temp[x - 1]] != 0)
            {
                temp.pop_back();
                break;
            }
            else
            {
                temp.pb(num[i]);
                count[num[i]]--;
            }
        }
    }
    cout << dist - temp.size() << nl;
}
int main()
{
    ios::sync_with_stdio(0);
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