#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    int countPos = 0, countNeg = 0;
    for(int i = 0; i < n ; i++){
        if (a[i]>0) countPos += 1;
        else if(a[i]<0) countNeg += 1; 
    }
    cout << countPos << "\n" <<countNeg;
    return 0;
}