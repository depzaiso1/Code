#include <iostream>
using namespace std;

int main(){
    int i1 = 10;
    int &i1_ref = i1;

    cout << &i1 << endl;
    cout << &i1_ref << endl;

    int x = 5;
    std::cout << x << '\n'; // print the value of variable x
    std::cout << &x << '\n'; // print the memory address of variable x
    return 0;
}