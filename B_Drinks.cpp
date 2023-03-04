//  https://codeforces.com/problemset/problem/200/B

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
    double n,sum=0,result;
	int a[101];
	cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>a[i];
		sum=sum+a[i];
	}
	result =sum/n;
	cout<<result;
    
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