//  https://codeforces.com/problemset/problem/1685/A
 
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
 
void solve()
{
    int size;
    cin>>size;
    ll arr[size],res[size];
 
    for(int i=0;i<size;i++)
        cin>>arr[i];

    bool result = true;

    if(size%2)
    {
        result=false;
    }
    else
    {
        sort(arr,arr+size);
        int i=size/2, j=0, x=0;
        while(j<(size/2))
        {
            res[x++]=arr[j++];
            res[x++]=arr[i++];
        }
        for(int i=1;i<size-1;i++)
        {
            // cout<<arr[i]<<"  ";
            if(res[i]>res[i-1] && res[i]>res[i+1])
                continue;
            else if(res[i]<res[i-1] && res[i]<res[i+1])
                continue;
            else
            {
                result = false;
                break;
            }
        }
    }
    if(result==true)
    {
        cout<<"YES"<<nl;
        for(int i=0;i<size;i++)
            cout<<res[i]<<" ";
        cout<<nl;
    }
    else
        cout<<"NO"<<nl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}