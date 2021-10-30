#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int i;
    string number[] = {"none", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(i = a; i <= b; i++){
        if(i <= 9) cout << number[i] << endl;
        else if(i % 2 == 0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
}