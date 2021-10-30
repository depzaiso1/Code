#include <iostream>
using namespace std;
int a[1000];
int n;
//int sum;
int SumEven(int n){
    if(n == 0) return a[0];
    if(a[n] % 2 == 0){
        return SumEven(n-1) + a[n];
    }
    return SumEven(n-1);
}

int main(){
    //int n;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    cout << SumEven(n);
    return 0;
}