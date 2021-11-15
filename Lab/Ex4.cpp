//Exercise 4.	Write and run a program that reads a month from the user and displays the number of days in that month.
#include <iostream>
using namespace std;

int main(){
    int m;
    cin >> m;
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        cout << 31;
    }
    else if(m != 2) cout << 30;
    else cout << 28;
}