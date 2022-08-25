//  https://codeforces.com/contest/304/problem/B

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

int str_to_num(string x)
{
    int j = 0;
    int num = 0;
    for (int i = x.size() - 1; i >= 0; i--)
        num += ((x[i] - '0') * pow(10, j++));

    return num;
}
bool leap(int y)
{
    if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
        return true;
    else
        return false;
}

void solve()
{
    string start, end;
    cin >> start >> end;
    int y1, y2, m1, m2, d1, d2;
    bool flag = false;
    string temp;
    temp = start.substr(0, 4);
    y1 = str_to_num(temp);
    temp = start.substr(5, 2);
    m1 = str_to_num(temp);
    temp = start.substr(8, 2);
    d1 = str_to_num(temp);
    temp = end.substr(0, 4);
    y2 = str_to_num(temp);
    temp = end.substr(5, 2);
    m2 = str_to_num(temp);
    temp = end.substr(8, 2);
    d2 = str_to_num(temp);

    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    ll count = 0;

    if (y1 > y2)
    {
        swap(y2, y1);
        swap(m2, m1);
        swap(d2, d1);
    }
    if (y1 == y2)
    {

        if (m1 > m2)
        {
            swap(m1, m2);
            swap(d1, d2);
        }

        if (m1 == m2)
        {
            cout << abs(d1 - d2);
            return;
        }
        else
        {
            count = month[m1] - d1;
            if (leap(y1) && m1 < 3 && m2 > 2)
                count++;
            m1++;
            for (int i = m1; i < m2; i++)
                count += month[i];
            count += d2;
            cout << count;
            return;
        }
    }

    count += (month[m1] - d1);
    if (leap(y1) && m1 < 3)
        count++;
    m1++;
    for (int i = m1; i <= 12; i++)
        count += month[i];
    y1++;

    // cout << count << nl;

    count += d2;
    if (leap(y2) && m2 > 2)
        count++;
    m2--;
    for (int i = m2; i >= 1; i--)
        count += month[i];

    // cout << count << nl;

    for (int i = y1; i < y2; i++)
    {
        count += 365;
        if (leap(i))
            count++;
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}