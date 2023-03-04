//  https://codeforces.com/problemset/problem/1249/C2

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

vull num;
ull mx = 1e18;

int log_a_to_base_b(ll a, ll b)
{
    return log2(a) / log2(b);
}

ull power(int base, int p)
{
    ull result = 1;

    while (p--)
    {
        result = result * base;
    }
    return result;
}

void initialize()
{
    int i = 0;
    ull value;
    while (1)
    {
        value = power(3, i);
        num.pb(value);
        if (value >= mx)
            break;
        i++;
        // cout << value << nl;
    }
}

void solve()
{

    ull n, res = 0, bin = 0;
    cin >> n;
    int index = log_a_to_base_b(n, 3);

    // cout << "index=" << index << nl;
    ll temp = n;

    if (num[index] == n)
        res = n;
    else
    {
        for (int i = index; i >= 0; i--)
        {
            if (temp > num[i])
            {
                temp -= num[i];
                bin += pow(2, i);
            }
        }
        if (res == 0)
        {
            bin++;

            stack<int> tmp;
            while (bin > 0)
            {
                tmp.push(bin % 2);
                bin = bin / 2;
            }
            int x = tmp.size();

            while (x > 0)
            {
                int t = tmp.top();
                if (t == 1)
                    res += num[x - 1];

                tmp.pop();
                x--;
            }
        }
    }
    cout << res << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    initialize();
    int i = 1;

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}