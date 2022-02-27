#include <iostream>
using namespace std;

void coutBin(int *a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *a++;
    }
    cout << '\n';
}
void genBin(int n, char *a[], int i)
{
}
int main()
{
    int n;
    cin >> n;
    return 0;
}