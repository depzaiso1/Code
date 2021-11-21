#include <bits/stdc++.h>

using namespace std;

bool checkPrime(int n){
    if (n < 2) return false;
    else for(int i=2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;    
}
int main(){
    int n;
    cin >> n;
    cout << checkPrime(n);
    return 0;
}