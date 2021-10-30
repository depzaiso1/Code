#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n; cin >> n;
    for(int i = 0; i < n+1; i++){
        sum += i;
    }
    
    cout << sum;
    return 0;
}