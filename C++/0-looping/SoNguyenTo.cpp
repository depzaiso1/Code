#include <iostream>
using namespace std;

bool isPrime(int a){
    if(a <= 1) return false;
    for(int i = 2; i*i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}
void SoNguyenTo(int m, int n){
    for(int i = m; i <= n; i++){
        if(isPrime(i)){
            cout << i << "\n";
        }
    }
}
int main(){
    int m,n;
    cin >> m >> n;
    SoNguyenTo(m,n);
    return 0;
}