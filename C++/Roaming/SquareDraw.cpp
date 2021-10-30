#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin >> n;
    for (i=0; i<n;i++){
        cout << "*";
    }
    cout << "\n";
    for(i=0; i<n-2;i++){
        cout << "*";
        for(int j=0; j<n-2;j++){
            cout<< " ";
        }
        cout << "*\n";
    }
    for (i=0; i<n;i++){
        cout << "*";
    }
    return 0;
}