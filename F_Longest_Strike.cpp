//  https://codeforces.com/contest/1676/problem/F

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
    ll size, check;
    cin >> size >> check;
    vll num;
    ll temp;
    set<ll> value;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        num.pb(temp);
    }
    vSort(num);
    ll count = 1;
    temp = num[0];
    for (int i = 1; i < size; i++)
    {
        if (num[i] == temp)
            count++;
        else
        {
            if (count >= check)
            {
                value.insert(temp);
                // cout << temp << " ";
            }
            count = 1;
            temp = num[i];
        }
    }
    if (count >= check)
        value.insert(temp);

    if (value.size() == 0)
    {
        cout << "-1" << nl;
        return;
    }

    temp = *value.begin();
    int start = temp;
    ll maximum = 0;
    count = 0;
    // cout << temp << nl;
    for (auto val : value)
    {
        if (val == temp)
            count++;
        else
        {
            if (count > maximum)
            {
                maximum = count;
                start = temp - count;
            }
            temp = val + 1;
            count = 1;
            continue;
        }
        temp++;
    }
    if (count > maximum)
    {
        maximum = count;
        start = temp - count;
    }

    cout << start << " " << start + maximum - 1 << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}