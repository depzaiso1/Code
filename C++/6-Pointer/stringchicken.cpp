#include <iostream>
using namespace std;

int main()
{
    string food = "Chicken";
    string *ptr = &food;
    cout << ptr << '\n';
    cout << *ptr << '\n';

    *ptr = "Hamburger";
    cout << *ptr << '\n';
    cout << food;
    return 0;
}