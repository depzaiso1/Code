#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}
int main(){
    int a,b;
    cin >> a >> b;
    int c = gcd(a,b);
    cout << a/c << " " << b/c;
    return 0;
}