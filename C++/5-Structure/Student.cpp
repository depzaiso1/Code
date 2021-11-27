#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int id;
    string name;
}Student;

int main()
{
    Student stdList[2];
    
    stdList[0].id = 202101;
    stdList[0].name = "Mary";
    
    stdList[1].id = 202102;
    stdList[1].name = "Peter";
    
    cout << "Student ID: " << stdList[0].id << "\t" << "Student name: " << stdList[0].name << endl;
    cout << "Student ID: " << stdList[1].id << "\t" << "Student name: " << stdList[1].name << endl;

    return 0;
}
