#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a > 0){
        cout << a << " is a positive number." << "\n";
    }
    else if(a < 0) cout << a << " is a negative number." << "\n";
    else cout << a << " is zero";
}