#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool F(ll k, ll x){
    ll cnt = 0;
    for(int i = 1; 1LL*i*i<=x; i++){
        int cntj = sqrt(x-1LL*i*i);
        cnt += cntj;
    }
    return (cnt >= k);
}

int main(){
    
}