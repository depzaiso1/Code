#include <iostream>
using namespace std;

void Swap(int i, int j)
{
    int temp = i;
    i = j;
    j = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    cout << "Truoc khi hoan vi: a = " << a << " b = " << b << '\n';
    // truyen bang con tro
    Swap(a, b);

    cout << "Sau khi hoan vi : a = " << a << " b = " << b << '\n';
    return 0;
}