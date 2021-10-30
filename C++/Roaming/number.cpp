#include <iostream>

using namespace std;

int main(){
    int in;
    string number[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> in;
    if(in > 9){
        cout << number[0];
    }
    else{
        cout << number[in];
    }
    return 0;
}