#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for(int i = a;i <b;i++)
typedef long long ll;


int main(){
    ll L;
    ll i,n;
    cin >> n >> L;
    
    ll arr[n];
    int temp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    double d = max(arr[0], L - arr[n-1]);
    REP(i,0,n-1){
        d = max(d,(arr[i+1]-arr[i])/2.0);
    }
    cout << fixed << setprecision(2) << d << "\n";
    
    return 0;
}