#include <iostream>
using namespace std;

int main(){
    int month;
    cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << 31 << "\n";
    }
    else if(month == 2) cout << 28 << " or " << 29 << "\n";
    else cout << 30;
    return 0;
}