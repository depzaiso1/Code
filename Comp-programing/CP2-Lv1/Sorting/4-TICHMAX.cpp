#include <bits/stdc++.h>
#include <algorithm>
typedef long long ll;
using namespace std;
#define dbg(x) cout<<#x<<" = "<<x<<'\n'

int main(){
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<ll> gen;
    ll n,input;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> input;
        gen.push_back(input);
    }
    for(auto x : gen){
        dbg(x);
    }
    ll result = 1;
    sort(gen.rbegin(),gen.rend());

    result = max(gen[0]*gen[1]*gen[2],gen[n-1]*gen[n-2]*gen[0]);
    cout << result << '\n';
    return 0;
}