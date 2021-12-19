#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    double x;
    cin >> n >> x;
    double temp = x;
    for(int i =0; i < n-1;i++){
        x = x*temp;
        
    }
    if(n == 0) x = 1.00;
    cout <<fixed << setprecision(2) <<x << " "<< 1/x;
    return 0;
}