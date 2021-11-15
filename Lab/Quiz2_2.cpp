#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    for(int i = 0; i < 5; i++){
        cin >> n;
        sum += n;
    }
    cout<<fixed<<setprecision(2)<<"The average of 5 integers: "<<sum/5.0;
    return 0;
}