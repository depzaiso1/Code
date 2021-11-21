#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, count;
    cin >> a;
    int temp = a;
    while(temp!=0){
        temp = temp / 10;
        ++count;
    }
    for (int i = count; i >0 ; i--){
        cout << a / (int)(pow(10,i-1)) << "\n";
        a = a % (int)(pow(10,i-1));
    }
    return 0;
}