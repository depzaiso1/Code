#include <bits/stdc++.h>
using namespace std;

int SoChia(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return i; 
    }
    return 0;
}
int main(){
    int n; cin >> n;
    cout << SoChia(n) << '\n';
    return 0;
}