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
    int size;
    cin >> size;
    vii num(size);
    int mx = -1, mn = 100000;
    int ind1, ind2;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        if (num[i] > mx)
        {
            mx = num[i];
            ind1 = i;
        }

        if (num[i] < mn)
        {
            mn = num[i];
            ind2 = i;
        }
    }
    if (ind1 == size - 1 || ind2 == 0)
        cout << mx - mn << nl;
    else
    {
        int temp1 = mx - min(num[0], num[ind1 + 1]);
        int temp2 = max(num[size - 1], num[ind2 - 1]) - mn;

        int ans = max(temp1, temp2);

        for (int i = 0; i < size - 2; i++)
        {
            int temp = num[i] - num[i + 1];
            if (temp > ans)
                ans = temp;
        }
        int temp = num[size - 2] - num[size - 1];
        cout << max(temp, ans) << nl;
    }
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