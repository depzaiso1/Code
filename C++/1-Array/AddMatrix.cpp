/*Ex:
Write a C program to read elements in two matrices and add elements of both matrices. C program for addition of two matrix. Matrix addition program in C. Logic to add two matrix in C programming.

Example

Input

Input elements in 3x3 matrix1: 
1 2 3
4 5 6
7 8 9
Input elements in 3x3 matrix2:
9 8 7
6 5 4
3 2 1
Output

Sum of both matrix =
10 10 10
10 10 10
10 10 10
*/
#include <bits/stdc++.h>
using namespace std;

int a[3][3], b[3][3];
int main(){
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cin >> b[i][j];
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout <<  a[i][j]+b[i][j] << " ";
        }
        cout <<"\n";
    }
    return 0;
}
