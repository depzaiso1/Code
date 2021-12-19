#include <bits/stdc++.h>
using namespace std;

double item(int n){
    double k;
    if (n % 2 == 0) k = 1/(2.0*n+1);
    else k = -1/(2.0*n+1);
    return k;
}

void appro(){
    int i = 0;
    double tong=0;
    double dk = 0.000001;
    while (fabs(item(i))-dk>0){
        tong += item(i);
        i++;
    }
    cout << "Pi xap xi: " << 4*tong;
}

int main(){
    appro();
    return 0;
}