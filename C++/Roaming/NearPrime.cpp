#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if (n<2) return false;
    for (int i = 2; i < sqrt(n); i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int checkUp(int n){
    for(int i = 0; i < n; i++){
        if(isPrime(n+i)){
            return n+i;
            break;
        }
    }
}
int checkDown(int n){
    for(int i = 0; i < n; i++){
        if(isPrime(n-i)){
            return n-i;
            break;
        }
    }
}
int main(){
    int n,a,b;
    cin >> n;
    a = checkUp(n);
    b = checkDown(n);
    if(a-n >= n-b){
        cout << b;
    }
    else cout << a;
    return 0;
}