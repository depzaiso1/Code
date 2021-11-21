#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    double a[1000];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    double max = a[0];
    for(int i = 0; i < N; i++){
        if(a[i]>= max){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}