#include <bits/stdc++.h>
using namespace std;

#define read(a) int a; cin >> a
#define rep(i,b,n) for(int i = b; i < n ; i++)

int v0[1000001],v1[1000001]; 
int& get(int i) {
  return ((i % 2 != 0)? v1 : v0)[i / 2];
}

void solve(){
}
int main(){
    //fast_cin();
    read(n);
    int index0 = 0, index1 = 0;
    rep(i,1,n+1){
        if(i%2==0){
            v1[index1] = i;
            index1++;
        }
        else{
            v0[index0] = i;
            index0++;
        }
    }
    if(n == 3 || n == 2) cout << "NO SOLUTION";
    else if(n == 4) cout << "2 4 1 3";
    else{
        rep(i,0,index0){
            cout << v0[i] << " ";
        }
        rep(i,0,index1){
            cout << v1[i] << " ";
        }
    }
    return 0;
}