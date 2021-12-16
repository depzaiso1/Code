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

struct coor
{
    int x;
    int y;
};
bool compare(const coor &x, const coor &y)
{
    if (x.x != y.x)
        return x.x < y.x;
    else
        return x.y < y.y;
}
void solve()
{
}
int main()
{
    fast_cin();
    read(n);
    int in1, in2;
    vector<coor> a;
    //marble a[m];
    REP(i, 0, n)
    {
        cin >> in1 >> in2;
        a.push_back(coor({in1, in2}));
    }
    cout << ln;
    sort(a.begin(), a.end(), compare);
    int cnt = 0;
    int j = 1;
    REP(i, 0, n)
    {
        REP(j, 1, n)
        {
            if (a[i].x == a[j].x || a[i].y == a[j].y)
            {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}