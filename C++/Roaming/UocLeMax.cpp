#include <iostream>
using namespace std;

int OddMax(int a){
    if (a % 2 != 0){
        return a; 
    }
    return OddMax(a/2);
}

int main(){
    int n;
    cin >> n;
    cout << OddMax(n);
    return 0;
}