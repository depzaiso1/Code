// C++ Program to display marks of 5 students

#include <iostream>
using namespace std;

// declare function to display marks
// take a 1d array as parameter
void display(int m[],int b) {
    
    cout << "Displaying marks: " << endl;
    // display array elements    
    for (int i = 0; i < b; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    // declare and initialize an array
    //int marks[5] = {88, 76, 90, 61, 69};
    // call display function
    // pass array as argument
    display(a,n);

    return 0;
}