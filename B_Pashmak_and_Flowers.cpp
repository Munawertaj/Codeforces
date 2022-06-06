//  https://codeforces.com/problemset/problem/459/B


#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vii vector<int>
#define vll vector<ll>
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

ll fun(ll num)
{
    if(num == 1)
        return 1;

    ll res=(num*(num+1))/2;
    return res;
}

void solve()
{
    int size;
    cin>>size;
    ll arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+size);
    ll max=1,min=1;
    int i=1;
    while(1)
    {
        if(arr[i]==arr[0])
            min++;
        else
            break;
        i++;
    }
    i=size-2;
    while(1)
    {
        if(arr[size-1]==arr[i])
            max++;
        else
            break;
        i--;
    }
    if(arr[0]==arr[size-1])
        cout<<arr[size-1]-arr[0]<<" "<<fun(size-1);
    else
        cout<<arr[size-1]-arr[0]<<" "<<max*min;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin>>tc;
    // while(tc--){
    //     solve();
    // }
    solve();
    return 0;
}