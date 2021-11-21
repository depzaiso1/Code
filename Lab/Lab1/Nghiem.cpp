#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){
    //TODO
    double a,b,c,delta;
    cin >> a >> b >> c;
    delta = b*b - 4*a*c;
    if (a == 0 && b == 0){
        if (c == 0) cout << "Countless solutions";
        else cout << "No solution";
    }
    else if(a == 0){
        cout << fixed << setprecision(4) << -c/b;
    }
    else{
        if (delta == 0){
            cout << fixed << setprecision(4) << -b/(2*a);
        }
        else if(delta < 0){
            cout << fixed << setprecision(4) << -b/(2*a) << " + " << fixed << setprecision(4) << sqrt(abs(delta))/(2*a) << "*i" << "\n";
            cout << fixed << setprecision(4) << -b/(2*a) << " - " << fixed << setprecision(4) << sqrt(abs(delta))/(2*a) << "*i";
        }
        else{
            cout << fixed << setprecision(4) << (-b + sqrt(delta))/2*a << "\n";
            cout << fixed << setprecision(4) << (-b - sqrt(delta))/2*a << "\n";
        }
    }
    return 0;
}