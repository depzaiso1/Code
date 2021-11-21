#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    // TODO
    double a[5];
    double b[5]={9.5,6.4,12.5,5.5,10.5};
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    cout << left << setw(30) << "Hourly Rate";
    cout << left << setw(30) << "Working Hour";
    cout << left << setw(30) << "Wage"<<endl;
    for(int i = 0; i<5;i++){
        cout << left << setw(30) << fixed << setprecision(10) << b[i];
        cout << left << setw(30) << fixed << setprecision(10) <<a[i];
        cout << left << setw(30) << fixed << setprecision(10) << a[i]*b[i]<<endl;

    }
}