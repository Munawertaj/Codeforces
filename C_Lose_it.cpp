//  https://codeforces.com/contest/1176/problem/C

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
    int size;
    cin >> size;
    vll count[43];
    int x;
    int ct = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        count[x].pb(i);
    }
    int arr[6] = {4, 8, 15, 16, 23, 42};

    ll max = count[arr[0]].size();
    ll min = count[arr[0]].size();

    for (int i = 1; i < 6; i++)
    {
        if (count[arr[i]].size() > max)
            max = count[arr[i]].size();
        if (count[arr[i]].size() < min)
            min = count[arr[i]].size();
    }
    if (min == 0)
    {
        cout << size;
        return;
    }
    ll fin_count = 0;
    bool flag = false;
    while(1)
    {
        vll temp;
        for (int j = 0; j < 6; j++)
        {
            ll x = count[arr[j]][count[arr[j]].size() - 1];
            temp.pb(x);
            cout << x << "  ";
        }
        cout << nl;
        int j;
        for (j = 1; j < 6; j++)
        {
            if (temp[j] < temp[j - 1])
                break;
        }
        for (int k = 0; k < j; k++)
        {
            if (count[arr[k]].size() == 1)
                flag = true;
            count[arr[k]].pop_back();
        }
        if (j < 6)
            fin_count += j;
        if (flag == true)
            break;
    }
    for (int i = 0; i < 6; i++)
    {
        fin_count += count[arr[i]].size();
    }
    cout << fin_count << nl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}