#include <iostream>
#include <array>
typedef long long ll;
using namespace std;

long long AddEle(ll arr[],ll n){
    ll step = 0;
    for(ll i = 1; i < n; i++){
        while(arr[i] < arr[i-1]){
            arr[i] = arr[i] + 1;
            step++;
        }   
    }
    return step;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << AddEle(a,n);
    return 0;
}