//

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

int str_to_num(string x)
{
    int j = 0;
    int num = 0;
    for (int i = x.size() - 1; i >= 0; i--)
        num += ((x[i] - '0') * pow(10, j++));

    return num;
}

void solve()
{
    string time;
    cin >> time;
    int num;
    cin >> num;
    int hour, minute;
    string temp = time.substr(0, 2);
    hour = str_to_num(temp);
    temp = time.substr(3, 2);
    minute = str_to_num(temp);
    // cout << hour << " " << minute << nl;
    int total = hour * 60 + minute;
    int check = total;
    int ans = 0;
    while (1)
    {
        if (total <= 350 && total % 70 == 0)
            ans++;
        if (total > 600 && total <= 951 && total % 70 == 41)
            ans++;
        if (total > 1200 && total % 70 == 12)
            ans++;

        total = (total + num) % 1440;
        if (total == check)
            break;
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
        solve();
    return 0;
}