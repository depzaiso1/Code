#include <iostream>
using namespace std;

int main(){
    float a,b,c,min;
    cin >> a >> b >> c;
    if (a > c && b > c ){
        cout << c;
    }
    else if (b > a) cout << a;
    else cout << b;
    //cout << max << "\n";
    return 0;
}