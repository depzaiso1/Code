#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if (n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = fibonacci(i);
    }
    return 0;
}