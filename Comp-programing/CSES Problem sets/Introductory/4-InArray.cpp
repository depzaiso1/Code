#include <iostream>
using namespace std;

/*int AddEle(int arr[],int n){
    int step = 0;
    for(int i = 1; i < n; i++){
        while(arr[i] < arr[i-1]){
            arr[i]++;
            step++;
        }   
    }
    return step;
}*/
int main(){
    long long n;
    cin >> n;
    long long a[n]; long long counter = 0;

    for(long long i = 0; i <n;i++){
        cin >> a[i];
    }
    for(long long i = 1; i < n; i++){
        while(a[i] < a[i-1]){
            a[i] = a[i]+1;
            counter++;
        }
    }
    cout << counter;
    return 0;
}