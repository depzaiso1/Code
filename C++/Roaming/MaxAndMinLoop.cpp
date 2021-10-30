#include <iostream>
using namespace std;

int main(){
    int n;
    int max = -1,min = 11;
    while(true){
        cin >> n;
        if(n < 0) break;
        if(n>max) max = n;
        if(n<min) min = n;
        
    }
    cout << "Diem cao nhat:" << max << endl;
    cout << "Diem thap nhat" << min;
    return 0;
}