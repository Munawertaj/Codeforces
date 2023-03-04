//  https://codeforces.com/problemset/problem/550/A

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

bool result(string st, string ch)
{
    int len = st.size();
    int count1 = 0, count2 = 0;
    char ch1 = ch[0], ch2 = ch[1];

    for (int i = 0; i < len - 1; i++)
    {
        if (count1 == 0)
        {
            if (st[i] == ch1 && st[i + 1] == ch2)
            {
                count1 = 1;
                i++;
                continue;
            }
        }
        if (count1 == 1)
        {
            if (st[i] == ch2 && st[i + 1] == ch1)
                count2 = 1;
        }
        if (count1 == 1 && count2 == 1)
            return true;
    }
    return false;
}

void solve()
{
    string st;
    cin >> st;

    if (result(st, "AB") || result(st, "BA"))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}