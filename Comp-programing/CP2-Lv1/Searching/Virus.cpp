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
 
bool compare(string a, string b){
    for(int i = 0; i < 0; i++){
        if(b[i] == '*') continue;
        if(a[i] != b[i]) return false;
    }
    return true;
}
bool search(string a, string b){
    if(a.size() < b.size())
        return false;
    
    int na = a.size(), nb = b.size();

    for(int i = 0; i < na - nb + 1; i++){
        string s = a.substr(i,nb);
        if(compare(s,b))
            return true;
    }
    return false;
}
void solve(int iTest){
    read(n);
    vector<string> badVirus;
    for(auto &x: badVirus)
        cin >> x;
    
    read(m);
    vector<string> virus(m);
    for(auto &x: virus)
        cin >> x;
    cout << "Data set #" << iTest << ":"<< ln;
    rep(i,m){
        cout << "Virus #" << i + 1 << ": ";
        bool isInvalid = false;
        for(int j = 0; j < n; j++){
            if(search(virus[i],badVirus[j])){
                isInvalid = true;
                break;
            }
        }
        if(!isInvalid) 
            cout << "Cool! Victor can take it with him" << ln;
        else cout << "Nuts. This virus is illegal in Hawaii" << ln;
    }
    cout << ln;
}
int main(){
    //fast_cin();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    read(T);
    //read(n);
    REP(tc,1,T+1) {
        solve(tc);
    }
    return 0;
}