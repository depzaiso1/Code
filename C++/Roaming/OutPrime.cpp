#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int n,a;
    //a= 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        bool checkPrime = true;
        a = n - i;
        for(int j = 2; j < a; j++){
            if(a % j == 0){
                checkPrime = false;
                //continue;
            }
        }
        if(a==1) break;
        if(checkPrime == true){
            cout << a << endl;
        }
        
    }
}*/

bool isPrime(int n){
    if (n<2) return false;
    for (int i = 2; i < sqrt(n); i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    for(int i = 1; i < n+1; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}