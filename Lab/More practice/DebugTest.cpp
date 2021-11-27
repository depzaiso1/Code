#include <iostream>
using namespace std;

int CalculateSum(int from, int to){
    int sum = 0;
    for(int i = from; i <= to; ++i){
        sum += i;
    }
    return sum;
}

int main(){
    int a = 10, b = 35;
    int result = CalculateSum(a,b);
    cout << result << endl;
    return 0;
}