#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define rep(i, e) for (ll i = 0; i < e; i++)
#define REP(i, s, e) for (ll i = s; i < e; i++)
#define rrep(i, s) for (ll i = s; i >= 0; i--)
#define rREP(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define read(a) \
    ll a;       \
    cin >> a
const int maxn = 2e5;
int n, x;
int p[maxn];
int cnt = 0;
void solve()
{
    cin >> n >> x;
    int i = 0;
    j = n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    while (j >= i)
    {
        if (i == j)
            cnt += 1;
        else if (p[i] + p[j] > x)
        {
            cnt += 1;
            j--;
        }
        else if (p[i] + p[j] <= x)
        {
            cnt += 1;
            j--;
            i++;
        }
    }
    return cnt;
}
int main()
{
    fast_cin();
    solve();
    return 0;
}