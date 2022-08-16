//  https://codeforces.com/problemset/problem/31/A

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
    int count[N] = {0};
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        count[arr[i]] = i + 1;
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int x = arr[i] + arr[j];

            if (count[x] != 0)
            {
                cout << count[x] << " " << i + 1 << " " << j + 1;
                return;
            }
        }
    }
    cout << "-1" << nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    return 0;
}