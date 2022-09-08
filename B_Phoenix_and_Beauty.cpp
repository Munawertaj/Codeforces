//  https://codeforces.com/problemset/problem/1348/B

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
#define SORT(v) sort(v.begin(), v.end())
#define REVSORT(v) sort(v.rbegin(), v.rend())
#define REVERSE(v) reverse(v.rbegin(), v.rend())
#define lowbound(name, val) lower_bound(name.begin(), name.end(), val) - name.begin() + 1
#define uppbound(name, val) upper_bound(name.begin(), name.end(), val) - name.begin() + 1
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
    int size, sub_size;
    cin >> size >> sub_size;
    vii num(size);
    set<int> dist;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        dist.insert(num[i]);
    }
    int len = dist.size();
    if (len > sub_size)
        cout << "-1";

    else if (sub_size == 1)
    {
        if (len == 1)
        {
            cout << size << nl;
            for (int i = 0; i < size; i++)
                cout << num[i] << " ";
        }
        else
            cout << "-1";
    }
    else
    {
        vii res;
        int j = 0;
        vii subarr;
        int count = 0;
        while (count < sub_size)
        {
            for (auto x : dist)
            {
                subarr.pb(x);
                count++;
                if (count == sub_size)
                    break;
            }
        }
        while (1)
        {
            for (auto x : subarr)
            {
                res.pb(x);
                if (x == num[j])
                    j++;
                if (j == size)
                    break;
            }
            if (j == size)
                break;
        }
        cout << res.size() << nl;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    }
    cout << nl;
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