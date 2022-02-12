#include <bits/stdc++.h>
using namespace std;

int nthFibo(int n){
    if (n <= 1) return n;

    int f2 = 0;
    int f1 = 1;
    int f;
    for(int i = 2; i < n; i++){
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    }
    return f;
}
int main(){
    int n; cin >> n;
    cout << nthFibo(n);
    return 0;
}