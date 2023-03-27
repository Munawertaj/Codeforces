#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <cstring>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <stack>
#include <queue>
#include <bits/stdc++.h>

#define int long long
typedef long long ll;
typedef long long ull;
typedef long double ld;
#define getunique(v)                      \
    {                                     \
        sort(all(v));                     \
        v.erase(unique(all(v)), v.end()); \
    }
using namespace std;
const int mod = 1e9 + 7;
const long long oo = 1e16;
const double eps = pow(10, -7);
string ys = "YES", no = "NO";
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second < b.second);
}
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

// Function for finding difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i = n2 - 1; i >= 0; i--)
    {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of str1[]
    for (int i = n1 - n2 - 1; i >= 0; i--)
    {
        if (str1[i] == '0' && carry)
        {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) // remove preceding 0's
            str.push_back(sub + '0');
        carry = 0;
    }

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
void bittemp()
{
    string s, ans;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < (1 << n); ++i)
    {
        string temp;
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                temp += s[j];
            }
        }
        string t2 = temp;
        std::reverse(t2.begin(), t2.end());
        if (t2 == temp)
        {
            if (ans.size() == 0)
                ans = t2;
            else
                ans = max(ans, t2);
        }
    }
    cout << ans;
}
ll fastpow(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n % 2 != 0)
            res *= x;
        x = x * x;
        n /= 2;
    }
    return res;
}
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll a2 = a;
        a = b;
        b = a2 % b;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
/*bpmodm*/
/*unordered_map<ll,ll>vis;
ll bpmodm(ll b , ll p,ll m){
    if(p == 1){
        return b%m;
    }else if(p == 0){
        return 1;
    }
    ll l;
    if(vis.find(p/2) != vis.end()){
        l = vis[p/2];
    }else{
        l = bpmodm(b,p/2,m);
        vis.insert(make_pair(p/2,l));
    }
    ll r;
    if(vis.find(p - (p/2)) != vis.end()){
        r = vis[p - (p/2)];
    }else{
        r = bpmodm(b,p - (p/2),m);
        vis.insert(make_pair(p-(p/2),r));
    }
    return (l*r)%m;
}*/

ll add(ll a, ll b, ll m)
{
    return ((a % m) + (b % m)) % m;
}
ll mul(ll a, ll b, ll m)
{
    return ((a % m) * (b % m)) % m;
}
// Returns (a * b) % mod
long long moduloMultiplication(long long a, long long b,
                               long long mod)
{
    long long res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return res;
}
ll sub(ll a, ll b, ll m)
{
    return ((a % m) - (b % m) + m) % m;
}
int binaryExponentiation(int x, int n)
{
    int result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = result * x;
        }
        x = x * x;
        n = n / 2;
    }
    return result;
}
ll modularExponentiation(ll x, ll n, ll m)
{
    ll result = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result = mul(result, x, m);
        }
        x = mul(x, x, m);
        n = n / 2;
    }
    return result;
}
bool getBit(ll num, int idx)
{
    return ((num >> idx) & 1);
}

ll setBit(ll num, int idx, bool val)
{
    return val ? (num | (1LL << idx)) : (num & ~(1LL << idx));
}

ll flipBit(ll num, int idx)
{
    return (num ^ (1LL << idx));
}

ll leastBit(ll num)
{
    return (num & -num);
}
bool isPowerOfTwo(ll num)
{
    return (num & num - 1) == 0;
}

int turnOnLastZero(int S)
{
    return S | S + 1;
}

int turnOffLastBit(int S)
{
    return S & S - 1;
}

int turnOnLastConsecutiveZeroes(int S)
{
    return S | S - 1;
}

int turnOffLastConsecutiveBits(int S)
{
    return S & S + 1;
}

vector<int> genAllSubmask(int mask)
{
    vector<int> v;
    for (int subMask = mask;; subMask = (subMask - 1) & mask)
    {
        v.push_back(subMask);
        if (subMask == 0)
            break;
    }
    return v;
}

// o(sqrt(n))
void factorization()
{
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i * i != n)
            {
                cout << n / i;
            }
            cout << endl;
        }
    }
}
// o(sqrt(n))
vector<ll> primeFactorization(ll n)
{
    vector<ll> ret;
    for (ll i = 2; i * i <= n; i++)
    {
        // if(n%i)continue;
        while (n % i == 0)
        {
            n /= i;
            ret.push_back(i);
        }
    }
    if (n > 1)
    {
        ret.push_back(n);
    }
    return ret;
}
// O(√n * logn)
int phi(int n)
{
    int result = 1, p2k = 1;
    for (int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            p2k = 1;
            while (n % p == 0)
                p2k *= p, n /= p;
            result *= (p2k / p) * (p - 1);
        }
    }
    if (n != 1)
        result *= n - 1;
    return result;
}
void phiGenerator()
{
    const int MAX = 1e6;
    char primes[MAX + 1];
    int phi[MAX + 1];
    memset(primes, 1, sizeof primes);
    for (int k = 0; k <= MAX; ++k)
    {
        phi[k] = 1;
    }
    for (int i = 2; i <= MAX; ++i)
    {
        if (primes[i])
        {
            phi[i] = i - 1;
            for (int j = i * 2; j <= MAX; j += i)
            {
                primes[j] = 0;
                int n = j, pow = 1;
                while (!(n % i))
                    pow *= i, n /= i;
                phi[j] *= (pow / i) * (i - 1);
            }
        }
    }
}
/*ll phiFact(ll n){
    ll ret = 1;
    //can be like sieve
    for (int i = 2; i <= n; ++i) {
        ret = ret*(isprim(i)?i-1:i);
    }
    return ret;
}*/
int moebius(int n)
{
    int mebval = -1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            if (n % (i * i) == 0)
                return 0;
            n /= i;
            mebval *= -1;
        }
    }
    if (n)
        mebval *= -1;
    return mebval;
}
void moebiusGenerator()
{
    const int MAX = 1e5;
    char primes[MAX + 1];
    int moebius[MAX + 1];
    for (int k = 2; k <= MAX; ++k)
    {
        moebius[k] = 1, primes[k] = 1;
    }
    moebius[1] = 1;
    for (int i = 2; i <= MAX; ++i)
    {
        if (primes[i])
        {
            moebius[i] = -1;
            for (int j = i * 2; j <= MAX; j += i)
            {
                primes[j] = 0;
                moebius[j] = j % (i * i) == 0 ? 0 : -moebius[j];
            }
        }
    }
}

void rad()
{
    // what is the smallest +ve number that can be diveded by all numbers from 1 to n
    ll n, l = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        l = lcm(i, l);
    }
    cout << l << endl;
    ll g = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        g = gcd(g, i);
    }
    cout << g << endl;
}
ll extendedEuclid(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = extendedEuclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
int modInverse(int A, int M)
{
    ll x, y;
    ll g = extendedEuclid(A, M, x, y);
    if (g != 1)
        return -1;
    return (x % M + M) % M;
}
ll modDivide(ll a, ll b, ll m)
{
    a = a % m;
    ll inv = modInverse(b, m);
    if (inv == -1)
        // cout << "Division not defined";
        return -1;
    else
        return (inv * a) % m;
}
/*sieve*/
/*const int sz=1e6+10;
bool composite[sz+1];
vector<int>prime;
void sieve()
{
    composite[0]=composite[1]=1;
    for (int i=2;i*i<=sz;i++)
    {
        if (!composite[i])
        {
            for (int j=i*i;j<=sz;j+=i)
            {
                composite[j]=1;
            }
        }
    }
}*/
/*const int sz=1e6+10;
bool composite[sz+1];
vector<int>prime;
void sieve()
{
    composite[0]=composite[1]=1;
    for (ll i=2;i*i<=sz;i++)
    {
        if (!composite[i])
        {
            //prime.push_back(i);
            for (ll j=i*i;j<=sz;j+=i)
            {
                composite[j]=1;
            }
        }
    }
}*/

bool judgePrime(ll x)
{
    if (x == 2)
        return true;
    if (x % 2 == 0 || x < 2)
        return false;
    for (ll i = 3; i * i <= x; i += 2)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
// start + (end-start)/2 = (start + end) / 2
int BSfindFirst(int start, int end, int val, int arr[])
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < val)
            start = mid + 1;
        else if (arr[mid] > val)
            end = mid - 1;
        else
            end = mid;
    }
    return start;
}

int BSfindLast(int start, int end, int val, int arr[])
{
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < val)
            start = mid + 1;
        else if (arr[mid] > val)
            end = mid - 1;
        else
            start = mid;
    }
    return start;
}
ll numOfPairs(ll n)
{
    return ((n) * (n - 1)) / 2;
}
// Function to calculate nCr % p
int nCrm(int n, int r, int m)
{
    if (r > n)
        return 0;
    if (r > n - r)
        r = n - r;
    ll x = 1;
    for (int i = 1; i <= r; i++)
    {
        x = moduloMultiplication(x, (n + 1 - i), m);
        x = modDivide(x, i, m);
    }
    return x;
}
// NCR
ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}
// NPR
ll nPr(ll n, ll r)
{
    const int mod = 1e9 + 7;
    ll ans = 1;
    for (ll i = (n - r) + 1; i <= n; i++)
    {
        ans *= i;
        ans %= mod;
    }
    return ans;
}
// CPER
ll CPer(ll n, ll r)
{
    const int mod = 1e9 + 7;
    ll ans = 1;
    for (ll i = (n - r) + 1; i <= n; i++)
    {
        ans *= i;
        if (ans % r == 0)
        {
            ans /= r;
            r = 1;
        }
    }
    return ans;
}
bool isPali(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i++] != s[j--])
            return false;
    }
    return true;
}
/*DSU*/
const int Ndsu = 0;
int szdsu, pardsu[Ndsu], sizdsu[Ndsu];
void initDSU()
{
    for (int i = 1; i <= szdsu; i++)
        pardsu[i] = i, sizdsu[i] = 1;
}
int findparent(int u)
{
    if (pardsu[u] == u)
        return u;
    return pardsu[u] = findparent(pardsu[u]);
}
// bool iscyclicdsu = false;
void connect(int u, int v)
{
    u = findparent(u);
    v = findparent(v);
    /*if ( u == v)
    {
        iscyclicdsu =true;
        return;
    }*/
    if (sizdsu[v] < sizdsu[u])
        pardsu[v] = u, sizdsu[u] += sizdsu[v];
    else
        pardsu[u] = v, sizdsu[v] += sizdsu[u];
}
bool iscon(int u, int v)
{
    return (findparent(u) == findparent(v));
}
const ll NDijkstra = 0;
ll nDijkstra, distDijkstra[NDijkstra], parDijkstra[NDijkstra];
// child  weight
vector<pair<ll, ll>> gDijkstra[NDijkstra];
// o(e+vlogv)
void Dijkstra(int src)
{
    for (int i = 1; i <= nDijkstra; i++)
        distDijkstra[i] = oo;
    distDijkstra[src] = 0;
    //  distance node
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    while (!pq.empty())
    {
        ll node = pq.top().second, distance = pq.top().first;
        pq.pop();
        if (distance > distDijkstra[node])
        {
            continue;
        }
        for (auto ch : gDijkstra[node])
        {
            if (distDijkstra[node] + ch.second < distDijkstra[ch.first])
            {
                parDijkstra[ch.first] = node;
                distDijkstra[ch.first] = distDijkstra[node] + ch.second;
                pq.push({distDijkstra[ch.first], ch.first});
            }
        }
    }
}
const ll NBellman_Ford = 0, ooBellman_Ford = 1e18 + 7;
ll distBellman_Ford[NBellman_Ford], nBellman_Ford;
vector<pair<ll, pair<int, int>>> edgesBellman_Ford;
bool negCycle = false;
void Bellman_Ford(int src)
{
    for (int i = 1; i <= nBellman_Ford; i++)
        distBellman_Ford[i] = oo;
    distBellman_Ford[src] = 0;
    // O(n * m)
    for (int lvl = 1; lvl <= nBellman_Ford; lvl++)
    {
        for (int j = 0; j < edgesBellman_Ford.size(); j++)
        {
            int u = edgesBellman_Ford[j].second.first, v = edgesBellman_Ford[j].second.second, w = edgesBellman_Ford[j].first;
            if (distBellman_Ford[u] + w < distBellman_Ford[v])
            {
                if (lvl == nBellman_Ford)
                    negCycle = true;
                distBellman_Ford[v] = distBellman_Ford[u] + w;
            }
        }
    }
}
ll const ooFloyd_Warshall = 1e18 + 10, NFloyd_Warshall = 0;
ll dFloyd_Warshall[NFloyd_Warshall][NFloyd_Warshall];
ll nFloyd_Warshall, mFloyd_Warshall;
void Floyd_Warshall()
{
    for (int i = 1; i <= nFloyd_Warshall; ++i)
    {
        for (int j = 1; j <= nFloyd_Warshall; ++j)
        {
            cin >> dFloyd_Warshall[i][j];
        }
    }
    for (int k = 1; k <= nFloyd_Warshall; ++k)
        for (int i = 1; i <= nFloyd_Warshall; ++i)
            for (int j = 1; j <= nFloyd_Warshall; ++j)
                dFloyd_Warshall[i][j] = min(dFloyd_Warshall[i][j], dFloyd_Warshall[i][k] + dFloyd_Warshall[k][j]);
    /*for (int i = 0; i < nFloyd_Warshall; ++i) {
        if(dFloyd_Warshall[i][i]<0) {
            cout << "cyc\n";
        }
    }*/
}
/*eular*/
const int Neular = 0, infeular = 1e9;
int ineular[Neular], outeular[Neular], viseular[Neular], vis2[Neular];
vector<int> geular[Neular];
void direular(int node)
{
    for (auto ch : geular[node])
    {
        if (!viseular[ch])
        {
            viseular[ch] = 1;
            direular(ch);
        }
    }
}
const int Nundureular = 0, infundureular = 1e9;
int visansundureular[Nundureular], degundureular[Nundureular];
vector<pair<int, int>> undgeularg[Nundureular];
vector<int> ansundureular;
void undureular(int node)
{
    while (!undgeularg[node].empty())
    {
        int v = undgeularg[node].back().second;
        int idx = undgeularg[node].back().first;
        undgeularg[node].pop_back();
        if (visansundureular[idx])
            continue;
        visansundureular[idx] = 1;
        undureular(v);
    }
    ansundureular.push_back(node);
}

int LongestIncreasingSubsequenceLength(vector<int> &v)
{
    if (v.size() == 0) // boundary case
        return 0;
    else if (v.size() == 1)
        return 1;
    vector<int> tail, inc(v.size(), 1), dec(v.size(), 1);
    tail.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        auto b = tail.begin(), e = tail.end();
        auto it = lower_bound(b, e, v[i]);
        if (it == tail.end())
            tail.push_back(v[i]);
        else
            *it = v[i];
        inc[i] = max(inc[i], (int)tail.size());
    }
    return tail.size();
}

int maxSubArraySum(vector<vector<int>> &a)
{
    int n = a.size(), ans = INT32_MIN;
    int db[200 + 5];
    for (int i = 0; i < n; ++i)
    {
        vector<int> temp(n, 0);
        for (int j = i; j < n; ++j)
        {
            for (int k = 0; k < n; ++k)
            {
                temp[k] += a[j][k];
            }
            int cur;
            db[0] = cur = temp[0];
            for (int k = 1; k < n; ++k)
            {
                db[k] = max(db[k - 1] + temp[k], temp[k]);
                cur = max(cur, db[k]);
            }
            ans = max(ans, cur);
        }
    }
    return ans;
}
/* 2D prefix sum*/
void pref2d(vector<vector<int>> arr)
{
    vector<vector<int>> pref(arr.size(), vector<int>(arr[0].size()));
    int n = pref.size();
    int m = pref[0].size();
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            pref[i][j] = arr[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            pref[i][j] += pref[i][j - 1];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            pref[i][j] += pref[i - 1][j];
        }
    }
}
void pref2d2(vector<vector<int>> arr)
{
    int n, q;
    cin >> n >> q;
    ll a[1000 + 2][1000 + 2];
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] += x * y;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] += a[i][j - 1];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] += a[i - 1][j];
        }
    }
    while (q--)
    {
        int h1, w1, h2, w2;
        cin >> h1 >> w1 >> h2 >> w2;
        h2--;
        w2--;
        h1++;
        w1++;
        cout << a[h2][w2] - a[h1 - 1][w2] - a[h2][w1 - 1] + a[h1 - 1][w1 - 1] << '\n';
    }
}

const int NHash = 0, modHash = 1e9 + 7, bHash = 29, b2Hash = 31;
ll pwHash[NHash], pw2Hash[NHash], invHash[NHash], inv2Hash[NHash], prefHash[NHash], pref2Hash[NHash];
int fphash(int b, int p)
{
    if (p == 0)
        return 1;
    int temp = fphash(b, p / 2);
    temp = mul(temp, temp, modHash);
    if (p & 1)
        temp = mul(temp, b, modHash);
    return temp;
}
// O(n + log(n)) Preprocessing
void preHash()
{
    pwHash[0] = pw2Hash[0] = invHash[0] = inv2Hash[0] = 1;
    int mul_inv = fphash(bHash, modHash - 2), mul_inv2 = fphash(b2Hash, modHash - 2);
    for (int i = 1; i < NHash; i++)
    {
        pwHash[i] = mul(pwHash[i - 1], bHash, modHash);
        pw2Hash[i] = mul(pw2Hash[i - 1], b2Hash, modHash);
        invHash[i] = mul(invHash[i - 1], mul_inv, modHash);
        inv2Hash[i] = mul(inv2Hash[i - 1], mul_inv2, modHash);
    }
}
int getHash(int l, int r)
{
    int ret = prefHash[r];
    if (l)
        ret = ((ll)ret - (ll)prefHash[l - 1] + (ll)modHash) % modHash;
    ret = mul(ret, invHash[l], modHash);
    return ret;
}
pair<int, int> get_hash(int l, int r)
{
    int ret = prefHash[r];
    if (l)
        ret = ((ll)ret - (ll)prefHash[l - 1] + (ll)modHash) % modHash;
    ret = mul(ret, invHash[l], modHash);
    int ret2 = pref2Hash[r];
    if (l)
        ret2 = ((ll)ret2 - (ll)pref2Hash[l - 1] + (ll)modHash) % modHash;
    ret2 = mul(ret2, inv2Hash[l], modHash);
    return {ret, ret2};
}
int getHashs(string &s)
{
    int cur = s[0] - 'a' + 1;
    int ans = 0;
    for (int i = 1; i < s.size(); i++)
    {
        int idx = add(cur, mul(pwHash[i], s[i] - 'a' + 1, modHash), modHash);
        ans = idx;
        cur = idx;
    }
    return ans;
}
pair<int, int> getHashs2(string &s)
{
    int cur = s[0] - 'a' + 1, cur2 = s[0] - 'a' + 1;
    int ans = 0, ans2 = 0;
    for (int i = 1; i < s.size(); i++)
    {
        int idx = add(cur, mul(pwHash[i], s[i] - 'a' + 1, modHash), modHash);
        ans = idx;
        cur = idx;
        int idx2 = add(cur2, mul(pw2Hash[i], s[i] - 'a' + 1, modHash), modHash);
        ans2 = idx2;
        cur2 = idx2;
    }
    return {ans, ans2};
}
void build_hash(string &s)
{
    int n = s.size();
    prefHash[0] = pref2Hash[0] = s[0] - 'a' + 1;
    for (int i = 1; i < n; i++)
    {
        prefHash[i] = add(prefHash[i - 1], mul(pwHash[i], s[i] - 'a' + 1, modHash), modHash);
        pref2Hash[i] = add(pref2Hash[i - 1], mul(pw2Hash[i], s[i] - 'a' + 1, modHash), modHash);
    }
}
struct Node
{
    Node *nxt[26];
    string mostacc;
    int acc;
    Node()
    {
        acc = 0;
        memset(nxt, 0, sizeof nxt);
    }
} *root;
void insert(string st)
{
    Node *cur = root;
    for (int i = 0; i < st.size(); i++)
    {
        if (!cur->nxt[st[i] - 'a'])
        {
            cur->nxt[st[i] - 'a'] = new Node();
        }
        cur = cur->nxt[st[i] - 'a'];
    }
}
const int NSparse = 0, MSparse = 23;
//   idx power of two
int spSparse[NSparse][MSparse], aSparse[NSparse], nSparse, lgSparse[NSparse];
void buildSparse()
{
    lgSparse[1] = 0;
    for (int i = 2; i <= nSparse; i++)
        lgSparse[i] = lgSparse[i / 2] + 1;
    for (int i = 0; i < nSparse; i++)
    {
        spSparse[i][0] = aSparse[i];
    }
    for (int bit = 1; bit < MSparse; bit++)
        for (int i = 0; i + (1 << bit) <= nSparse; i++)
        {
            spSparse[i][bit] = spSparse[i][bit - 1] * spSparse[i + (1 << (bit - 1))][bit - 1];
        }
}
int Querysum(int l, int r)
{
    int dist = r - l + 1;
    int sum = 0;
    for (int bit = MSparse - 1; bit >= 0; bit--)
    {
        if ((1 << bit) <= dist)
        {
            dist -= (1 << bit);
            sum += spSparse[l][bit];
            l += (1 << bit);
        }
    }
    return sum;
}
int QueryMX(int l, int r)
{
    if (l > r)
        return 0;
    int j = lgSparse[r - l + 1];
    return max(spSparse[l][j], spSparse[r - (1 << j) + 1][j]);
}
int QueryMN(int l, int r)
{
    if (l > r)
        return 0;
    int j = lgSparse[r - l + 1];
    return min(spSparse[l][j], spSparse[r - (1 << j) + 1][j]);
}
int querygcd(int L, int R)
{
    int j = lgSparse[R - L + 1];
    return gcd(spSparse[L][j], spSparse[R - (1 << j) + 1][j]);
}
const int NLca = 0, MLca = 23, modLca = 1e9 + 7;

int nLca, ancestorLca[NLca][MLca], lvlLca[NLca];
vector<int> gLca[NLca];

void dfsLca(int node, int par)
{
    lvlLca[node] = lvlLca[par] + 1;
    ancestorLca[node][0] = par;
    for (int j = 1; j < MLca; j++)
    {
        int p = ancestorLca[node][j - 1];
        ancestorLca[node][j] = ancestorLca[p][j - 1];
    }
    for (auto ch : gLca[node])
    {
        if (ch == par)
            continue;
        dfsLca(ch, node);
    }
}

int findKthAncestor(int u, int k)
{
    for (int j = MLca - 1; j >= 0; j--)
        if (k & (1 << j))
            u = ancestorLca[u][j];
    return u;
}

int getLCA(int u, int v)
{
    if (lvlLca[u] < lvlLca[v])
        swap(u, v);
    u = findKthAncestor(u, lvlLca[u] - lvlLca[v]);
    if (u == v)
        return u;
    for (int i = MLca - 1; i >= 0; i--)
    {
        if (ancestorLca[u][i] == ancestorLca[v][i])
            continue;
        u = ancestorLca[u][i];
        v = ancestorLca[v][i];
    }
    return ancestorLca[u][0];
}
const int Nsegmant = 0;
int treesegmant[Nsegmant << 2], asegmant[Nsegmant];
//

void buildsegmant(int node, int l, int r)
{

    if (l == r)
    {
        treesegmant[node] = asegmant[l];
        return;
    }
    int md = l + r >> 1;
    buildsegmant(node * 2, l, md);
    buildsegmant(node * 2 + 1, md + 1, r);
    // merge , sum , mx , mn , gcd , xor
    treesegmant[node] = treesegmant[node * 2] ^ treesegmant[node * 2 + 1];
}

void updatesegmant(int node, int l, int r, int idx, int val)
{

    if (l == r)
    {
        treesegmant[node] = val;
        return;
    }
    ll mid = (l + r) >> 1;
    if (idx <= mid)
        updatesegmant(node * 2, l, mid, idx, val);
    else
        updatesegmant(node * 2 + 1, mid + 1, r, idx, val);
    treesegmant[node] = treesegmant[node * 2] ^ treesegmant[node * 2 + 1];
}
// query summation of elemenst [s....e]
int querysegmant(int node, int l, int r, int s, int e)
{
    if (l > e || r < s)
        return 0;
    // totally inside
    if (l >= s and r <= e)
    {
        return treesegmant[node];
    }
    int md = l + r >> 1;
    auto a = querysegmant(node * 2, l, md, s, e);
    auto b = querysegmant(node * 2 + 1, md + 1, r, s, e);
    return a ^ b;
}

const int NLazyProp = 0;
ll treeLazyProp[NLazyProp << 2], alazyProp[NLazyProp], lazyProp[NLazyProp << 2];

void buildLazyProp(int node, int l, int r)
{
    lazyProp[node] = treeLazyProp[node] = 0;
    if (l == r)
    {
        treeLazyProp[node] = alazyProp[l];
        return;
    }
    int md = l + r >> 1;
    buildLazyProp(node << 1, l, md), buildLazyProp((node << 1) + 1, md + 1, r);
    treeLazyProp[node] = treeLazyProp[node << 1] + treeLazyProp[(node << 1) + 1];
}

void propagateLazyProp(int node, int l, int r)
{
    if (lazyProp[node] == 0)
        return;
    treeLazyProp[node] = abs(treeLazyProp[node] - (r - l + 1));
    if (l != r)
    {
        lazyProp[node << 1] = lazyProp[node << 1] ? 0 : 1;
        lazyProp[(node << 1) + 1] = lazyProp[(node << 1) + 1] ? 0 : 1;
    }
    lazyProp[node] = 0;
}

void updateLazyProp(int node, int l, int r, int s, int e, int val)
{
    propagateLazyProp(node, l, r);
    if (l > e || r < s)
        return;
    if (l >= s and r <= e)
    {
        lazyProp[node] = val;
        propagateLazyProp(node, l, r);
        return;
    }
    int md = l + r >> 1;
    updateLazyProp(node << 1, l, md, s, e, val), updateLazyProp((node << 1) + 1, md + 1, r, s, e, val);
    treeLazyProp[node] = treeLazyProp[node << 1] + treeLazyProp[(node << 1) + 1];
}

ll queryLazyProp(int node, int l, int r, int s, int e)
{
    propagateLazyProp(node, l, r);
    if (l > e || r < s)
        return 0;
    if (l >= s and r <= e)
        return treeLazyProp[node];
    int md = l + r >> 1;
    return queryLazyProp(node << 1, l, md, s, e) + queryLazyProp((node << 1) + 1, md + 1, r, s, e);
}

long long nextPowerOf2(long long N)
{
    if (N == 0)
        return 1;
    // if N is a power of two simply return it
    if (!(N & (N - 1)))
        return N;
    // else set only the left bit of most significant bit
    return 0x8000000000000000 >> (__builtin_clzll(N) - 1);
}
long long befPowerOf2(long long N)
{
    if (!(N & (N - 1)))
        return N;
    return (nextPowerOf2(N) >> 1);
}
void fast()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool valid(int i, int j, int n, int m)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
        return true;
    return 0;
}

int dx[] = {-1, 0, 0, 1, -1, -1, 1, 1};
int dy[] = {0, 1, -1, 0, -1, 1, 1, -1};

int32_t main()
{
    fast();
    // freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    // cout << setprecision(12) << fixed;

    int t = 1; // cin>>t;
    for (int tcc = 1; tcc <= t; tcc++)
    {
        int n;
        cin >> n;
        int ans = n * (n - 1) * (n - 2) * (n - 3) * (n - 4) / 120;
        ans *= n * (n - 1) * (n - 2) * (n - 3) * (n - 4);
        cout << ans << '\n';
    }
}