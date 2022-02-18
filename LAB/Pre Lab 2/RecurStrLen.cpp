#include <iostream>
using namespace std;

const int N = 1e9;
int ar[N];
void printPattern(int n)
{
    cout << n << " ";
    if (n > 0)
        printPattern(n - 5);
    if (n > 0)
        cout << n << " ";
    return;
}
int main()
{
    int n = 10;
    printPattern(n);

    return 0;
}