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
ll MOD = 998244353;
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
bool check(int T){
    for(int i = 0; i < C; i++){
        cap[i] =max(0, min(C[i], floor((T-P[i])/S[i])));
    }
    //is_sorted
}
int main(){
    fast_cin();
    read(R);
    read(B);
    read(C);
    for(int i = 0; i < C; i++){
        cin >> M[i] >> S[i] >> P[i];
        maxS = max(maxS, S[i]);
        maxP = max(maxP, P[i]);
    }
    int l = 0; r = B * maxS + maxP;
    while(l<=r){
        int T = (l+r)/2;
        if(check(T)){
            r = mid - 1;
            res = T;
        }
        else{
            l = mid + 1;
        }
    }
    cout << res;
    return 0;
}