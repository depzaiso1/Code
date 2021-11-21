#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //TODO
    int a,b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << "\n";
    cout << a << " - " << b << " = " << a-b << "\n";
    cout << a << " * " << b << " = " << a*b << "\n";
    cout <<fixed<< setprecision(2) <<  a << " / " << b << " = " << a/(double)b << "\n";
    return 0;
}