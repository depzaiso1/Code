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
 
struct van_chuyen{
    int A;
    int B;
};
int cnt[1000];
void solve(){
}
int main(){
    fast_cin();
    read(n);
    van_chuyen place[n];
    for(int i = 0; i < n;i++){
        cin >> place[i].A >> place[i].B;
    }
    for(int i = 0; i < n; i++){
        if(place[i].A < place[i].B){
            for(int j = place[i].A; j < place[i].B; j++){
                cnt[j]++;
            }
        }
        else if(place[i].A > place[i].B){
            for(int j = place[i].B; j < place[i].A; j++){
                cnt[j]++;
            }
        }
    }
    //find_max in cnt[]
    int max = 0, countMax;//find new MAX -> reset MAX = 1, find the same MAX ++
    for(int i = 0; i < 1000;i++){
        if(max < cnt[i]){
            max = cnt[i];
            countMax = 1;//reset MAX
        }
        else if(max == cnt[i]){
            countMax++;
        }
    }
    cout << countMax << ln;
    return 0;
}