#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    if (number > 0){
        cout << "positive number" << "\n";
    }
    else if (number < 0){
        cout << "negative number" << "\n";
    } 
    else{
        cout << "zero";
    }
    return 0;
}