//  https://codeforces.com/problemset/problem/342/A

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
    int size, x;
    cin >> size;
    vii num;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        num.pb(x);
    }
    vSort(num);
    vii ans;
    int low = size / 3;
    int mid = 2 * low;

    for (int i = 0; i < size / 3; i++)
    {
        if (num[low] % num[i] == 0 && num[mid] % num[low] == 0 && num[i] < num[low] && num[low] < num[mid])
        {
            ans.pb(num[i]);
            ans.pb(num[low]);
            ans.pb(num[mid]);
        }
        else
        {
            cout << "-1";
            return;
        }
        low++;
        mid++;
    }
    int count = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
        count++;
        if (count % 3 == 0)
            cout << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}