#include <bits/stdc++.h>
using namespace std;

float PI = 3.14;

int main(){
    float edge,radius;
    float circle, triangle;
    cin >> edge >> radius;

    circle = PI*radius*radius;
    triangle = (sqrt(3)/4)*edge*edge;

    cout << circle + 3*triangle - 0.5*circle;
    return 0;
}