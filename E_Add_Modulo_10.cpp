//  https://codeforces.com/problemset/problem/1714/E

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
    int size, count0 = 0;
    bool result = false;
    cin >> size;
    ll arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] % 10 == 5)
            arr[i] += 5;

        if (arr[i] % 10 == 0)
            count0++;
    }
    sort(arr, arr + size);

    // for (int i = 0; i < size; i++)
    //     cout << arr[i] << "   ";
    // cout << nl;

    if (arr[0] == arr[size - 1])
        result = true;
    else
    {
        if (count0 > 0)
            result = false;
        else
        {
            int temp=2;
            while(1)
            {
                if(arr[size-1]%10==temp)
                    break;
                arr[size - 1] += arr[size - 1] % 10;
            }

            int digit, i;

            for (i = 0; i < size - 1; i++)
            {
                while (1)
                {
                    digit = arr[i] % 10;
                    if (digit == temp)
                        break;

                    arr[i] += digit;
                }

                int check = abs(arr[size - 1] - arr[i]);
                if (check % 20 != 0)
                {
                    result = false;
                    break;
                }
            }
            if (i == size - 1)
                result = true;
        }
    }

    if (result == true)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
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