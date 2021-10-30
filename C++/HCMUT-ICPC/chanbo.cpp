#include <iostream>
using namespace std;

int main(){
    long int n, S;
    cin >> n;
    cin >> S;
    long long sum = 0;
    for(int i = 1; i<n+1;i++){
        sum += i;
    }
    cout << sum - S << endl;
    return 0;
}