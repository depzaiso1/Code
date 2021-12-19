#include <iostream>
using namespace std;

int main(){
    int year;
    bool check = false;
    cin >> year;
    if(year % 4 == 0 && year % 100 != 0) check = true;
    else if(year % 400 == 0) check = true;
    
    if(check) cout << year << " is a leap year.";
    else cout << year << " is not a leap year.";
    return 0;
}