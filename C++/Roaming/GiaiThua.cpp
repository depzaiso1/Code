#include <iostream>
using namespace std;

int giaithua(int a){
    if (a == 1){
        return 1;
    }
    return giaithua(a-1)*a;
}
int main(){
    int n;
    cin >> n;
    cout << giaithua(n);
}
