//  https://codeforces.com/contest/1169/problem/B

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
    ll num, up;
    cin >> up >> num;
    vector<pll> pr;
    ll x, y, num1, num2;
    for (int i = 0; i < num; i++)
    {
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        pr.pb(make_pair(x, y));
    }
    x = pr[0].first;
    y = pr[0].second;
    int i;
    for (i = 1; i < num; i++)
    {
        if (pr[i].first == x && pr[i].second == y)
            continue;
        else
        {
            if ((pr[i].first != x && pr[i].second != x) && (pr[i].first != y && pr[i].second != y))
            {
                cout << "NO";
                return;
            }
            else if (pr[i].first == x || pr[i].second == x)
            {
                num1 = x;
                break;
            }
            else
            {
                num1 = y;
                break;
            }
        }
    }
    if(i==num)
    {
        cout << "YES";
        return;
    }
    for (i = i + 1; i < num; i++)
    {
        if (pr[i].first == num1 || pr[i].second == num1)
            continue;
        else
            break;
    }
    x = pr[i].first;
    y = pr[i].second;
    for (i = i + 1; i < num; i++)
    {
        if (pr[i].first == num1 || pr[i].second == num1)
            continue;
        else if (pr[i].first == x && pr[i].second == y)
            continue;
        else
        {
            if ((pr[i].first != x && pr[i].second != x) && (pr[i].first != y && pr[i].second != y))
            {
                cout << "NO";
                return;
            }
            else if (pr[i].first == x || pr[i].second == x)
            {
                num2 = x;
                break;
            }
            else
            {
                num2 = y;
                break;
            }
        }
    }
    cout << num1 << "  " << num2 << nl;
    if (i == num)
        num2 = x;
    if (num1 > num2)
        swap(num1, num2);
    for (i = 0; i < num; i++)
    {
        if (pr[i].first == num1 || pr[i].second == num1 || pr[i].first == num2 || pr[i].second == num2)
            continue;
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES" << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}