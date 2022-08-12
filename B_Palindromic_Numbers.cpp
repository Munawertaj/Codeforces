//  https://codeforces.com/problemset/problem/1700/B

#include <bits/stdc++.h>
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

char Int_TO_Char(char ch, bool carry)
{
    int digit = (int)ch - '0';
    int result = digit + 48;
    char res = (char)result;
    return res;
}

void solve()
{
    int length;
    cin >> length;
    string num;
    cin >> num;

    bool carry = false;
    char temp;
    stack<char> result;

    if (num[0] == '1') // 9999999... - num
    {
        for (int i = length - 1; i >= 0; i--)
        {
            temp = 57 - num[i] + 48; // 9 -num[i] + 48
            result.push(temp);
        }
    }
    else
    {

        for (int i = length - 1; i >= 0; i--)
        {
            if (carry == true)
                num[i] = num[i] + 1;

            if (num[i] > 49)
            {
                temp = 59 - num[i] + 48; // 11-num[i]+48
                result.push(temp);
                carry = true;
            }
            else
            {
                temp = 49 - num[i] + 48; // 1-num[i] + 48
                result.push(temp);
                carry = false;
            }
        }
    }
    while (!result.empty())
    {
        cout << result.top();
        result.pop();
    }

    cout << nl;
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