#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    float digit,re;
    while(n != 0) {
        re = re*10 + n%10;
        n /= 10;
    }
    return re;
}
int main(){
    int n;
    cin >> n;
    cout << reverseNum(n);
    return 0;
}