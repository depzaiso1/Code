#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 9;
    int *ptr = &a;
    //*ptr = 6;
    ptr = &b;

    cout << *ptr;
    return 0;
}