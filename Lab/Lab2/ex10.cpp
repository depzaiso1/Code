#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 1) return 1;
    else return n*factorial(n-1);
}


int main(){
    double e=0;
    int i =2;
    //cout << factorial(5);
    while((1/factorial(i)-1/factorial(i+1))> 0.000001){
        e += 1/factorial(i);
        i++;
    }
    cout << e;
    return 0;
}