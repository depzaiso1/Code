/*Exercise 13.	Write a program to check whether a Triangle is Equilateral, Isosceles or Scalene*/
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) cout << "The triangle is Right-angled."; 
    else if (a == b && b == c) cout << "The triangle is Equilateral.";
    else if (a == b || b == c || c == a) cout << "The triangle is Isosceles.";
    else cout << "The triangle is Scalene.";
    return 0;
}