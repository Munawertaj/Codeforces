//  https://codeforces.com/problemset/problem/1669/D

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
    int size;
    cin >> size;
    string pic;
    cin >> pic;
    int count_B = 0, count_R = 0, count_W = 0, res = 1;
    for (int i = 0; i < size; i++)
    {
        if (pic[i] == 'B')
        {
            count_B++;
            count_R = 0;
        }
        else if (pic[i] == 'R')
        {
            count_R++;
            count_B = 0;
        }
        else
        {
            if (i < size - 2)
            {
                if (pic[i + 1] != 'W' && pic[i + 2] == 'W')
                    cout << "NO" << nl;

                return;
            }
        }
        if (count_B == 2 || count_R == 2)
        {
            if (count_B == 2)
            {
                if ((i + 1 < size && pic[i + 1] != 'R') || (i - 2 >= 0 && pic[i - 2] != 'R'))
                {
                    cout << "NO" << nl;
                    return;
                }
                else
                {
                    if ((i + 1 < size && pic[i + 1] != 'B') || (i - 2 >= 0 && pic[i - 2] != 'B'))
                    {
                        cout << "NO" << nl;
                        return;
                    }
                }
            }
        }
    }
    if (size == 1 && pic[0] != 'W')
    {
        cout << "NO" << nl;
        return;
    }

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