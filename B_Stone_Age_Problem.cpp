//  https://codeforces.com/problemset/problem/1679/B

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
    ull size, query;
    cin >> size >> query;
    ull num[size], sum = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    int type;
    ull rep1, rep2, index;
    bool check = false;
    int index_check[size] = {0};
    while (query--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> index >> rep1;
            if (check == true)
            {
                if (index_check[index - 1] == 0)
                {
                    num[index - 1] = rep2;
                    index_check[index - 1]++;
                }
            }

            sum = sum + rep1 - num[index - 1];
            num[index - 1] = rep1;
        }
        else
        {
            check = true;
            cin >> rep2;
            sum = size * rep2;
        }
        cout << sum << nl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}