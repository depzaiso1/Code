#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
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
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,n) for(ll i = s; i < n; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,n) for(ll i = s; i >= n; i--)
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
 

void solve(){

}
struct marble{
    int box;
    int ball;
};

bool compare(const marble& x, const marble& y){
    if(x.ball != y.ball) return x.ball > y.ball;
    return x.box >= y.box;
}

int main()
{
    fast_cin();
    int n, need,m;
    int in1,in2;
    cin >> n >> m;
    vector<marble> a;
    //marble a[m];
    forn(i,m){
        cin >> in1 >>in2;
        a.push_back(marble({in1,in2}));
        
    }
    sort(a.begin(), a.end(), compare);
    cout << ln;
    forn(i,m){
        cout << a[i].box << " " << a[i].ball << ln;
    }
    cout << ln;
    int buy = 0;
    need = n;
    for(int i = 0; i < m ; i++){
        if(a[i].box <= need){
            buy += (a[i].box)*(a[i].ball);
            need -= a[i].box;
        }
        else if(need < a[i].box){
            buy += need*a[i].ball;
            break;
        }
    }
    cout << buy << ln;
    return 0;
}