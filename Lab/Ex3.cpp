/*Exercise 3.	Write and run a program that reads an angle (expressed in degrees) and states in which quadrant the given angle lies. An angle A is said to be in the 
	first quadrant if it is in the range 0  A < 90
	second quadrant if it is in the range 90  A < 180
	third quadrant if it is in the range 180  A < 270
	and fourth quadrant if it is in the range 270  A < 360.
*/
#include <iostream>
using namespace std;

int main(){
    float A;
    cin >> A;
    if ((0 <= A) && (A < 90)) cout << "first quadrant";
    else if ((90 <= A) && (A < 180)) cout << "second quadrant";
    else if ((180 <= A) && (A < 270)) cout << "third quadrant";
    else cout << "fourth quadrant";
    return 0;
}