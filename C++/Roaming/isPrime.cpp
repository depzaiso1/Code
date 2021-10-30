#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int checkPrime;
    cin >> n;
    checkPrime = 1;
    if (n<2) checkPrime = 0;
    for (int i = 2; i < sqrt(n); i++){
        if(n % i == 0) {
            checkPrime = 0;
        }
    }
    if (checkPrime == 0){
        cout << "no";
    }
    else cout << "yes";
}