#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1000000007;
double eps = 1e-12;
#define rep(i,e) for(ll i = 0; i < e; i++)
#define REP(i,s,e) for(ll i = s; i < e; i++)
#define rrep(i,s) for(ll i = s; i >= 0; i--)
#define rREP(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define read(a) ll a; cin >> a
 

void solve(){
}
ll fibo(int n){
    ll sum = 1;
    if(n <= 1) return n % MOD;
    sum += (fibo(n-1) + fibo(n-2))%MOD;
    return sum % MOD;
}

int main(){
    fast_cin();
    ll n; cin >> n;
    cout << fibo(n);
     return 0;
}