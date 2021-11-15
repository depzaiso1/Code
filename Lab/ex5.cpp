/*Exercise 5.	Write and run a program that reads a numeric grade from a student and displays a corresponding character grade for that numeric grade. The program prints  ‘A’ for exam grades greater than or equal to 90, ‘B’ for grades in the range 80 to 89, ‘C’ for grades in the range 70 to 79, ‘D’ for grades in the range 60 to 69 and ‘F’ for all other grades.*/

#include <iostream>
using namespace std;

int main(){
    int grade;
    cin >> grade;
    if (grade > 100) cout << "Grade is not exist";
    else if (grade>=90) cout << "A";
    else if (grade>=80 && grade<90) cout << "B";
    else if (grade>=70 && grade<80) cout << "C";
    else if (grade>=60 && grade<70) cout << "D";
    else cout << "F";
    return 0;
}