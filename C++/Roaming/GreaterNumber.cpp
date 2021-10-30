#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,max, min;
    cin >> a >> b >> c;
    max = b;
    if(a > b){
        if (a > c) max = a;
        else max = c;
    }
    else if (c > b) max = c;
    cout << max;
    return 0;
}