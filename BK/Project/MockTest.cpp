// include section and declare library used

#include <iostream>
using namespace std;

int main()
{      

// declare and read the input (provided)

    int R;

    float V;

    cin >> R;

    //the main body, where students add, adjust the code to complete the program

    //The formula for the measurement 

    // the light is off
    V = R * (5.0/1023.0);
    if (V < 1.4 )

        cout << "The LED light is off " << endl;

    // The light will have dim brightness

    else if (V >= 1.4 && V < 2.5)

        cout << "The LED light will have dim brightness" << endl;

    // The light will be of medium brightness

    else if (V >= 2.5 && V < 5)

        cout << "The LED light will be of medium brightness" << endl;

    // The LED light will be of maximum brightness

    else if (V == 5)

        cout << "The LED light will be of maximum brightness" << endl;

    else

        cout << "The LED light will be short-circuited" <<endl;

    //(provided)

    return 0;

}