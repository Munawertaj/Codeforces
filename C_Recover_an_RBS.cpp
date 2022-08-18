//  https://codeforces.com/problemset/problem/1709/C

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

bool RBS(string st)
{
    int count = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '(')
            count++;
        else
            count--;
        if (count < 0)
            return false;
    }
    if (count == 0)
        return true;
    else
        return false;
}

void solve()
{
    string st;
    cin.ignore();
    cin >> st;
    int len = st.size();

    int count = 0, what = 0;
    for (int i = 0; i < len; i++)
    {
        if (st[i] == '(')
            count--;
        else if (st[i] == ')')
            count++;
        else
            what++;
    }

    int openB, closeB;
    openB = (what + count) / 2;
    closeB = (what - count) / 2;
    if (openB == 0 || closeB == 0)
    {
        cout << "YES" << nl;
        return;
    }
    string check;
    check = string(openB - 1, '(') + ")(" + string(closeB - 1, ')');

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (st[i] == '?')
            st[i] = check[j++];
    }

    if (RBS(st) == true)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;
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