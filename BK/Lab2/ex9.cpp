#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double x, rad;
    for(x = 5; x<86; x+=5){
        rad = (x*3.14)/180;
        cout << fixed << setprecision(2) << sin(rad) << " " << cos(rad) << " " << tan(rad) << "\n";
    }
    return 0;
}