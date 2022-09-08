//  https://codeforces.com/problemset/problem/1537/C

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
    ll arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int indx1 = -1, indx2 = -1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            indx1 = i - 1;
            indx2 = i;
            break;
        }
    }
    if (indx1 == -1)
    {
        indx1 = 0;
        indx2 = 1;
    }
    cout << arr[indx1] << " ";

    int j = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (j == indx2)
        {
            j--;
            if (j == indx1)
                j--;
        }

        if (i == indx1)
        {
            i++;
            if (i == indx2)
                i++;
        }
        if (i > j)
            break;
        if (i == j)
            cout << arr[i] << " ";
        else
            cout << arr[j--] << " " << arr[i] << " ";
    }
    cout << arr[indx2] << nl;
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