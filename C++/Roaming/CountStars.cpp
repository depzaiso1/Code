#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    while(true){
        cin >> n;
        if(n == 0){
            break;
        }
        if(n == 5){
            count += 1;
        }
    }
    cout << count;
    return 0;
}