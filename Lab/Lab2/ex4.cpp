#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    double a[N];
    double sum = 0;
    for(int i =0; i <N; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << fixed << setprecision(2)<< sum/(double) N;
    
    return 0;
}