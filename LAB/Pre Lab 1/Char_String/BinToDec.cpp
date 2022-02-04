#include <iostream>
#include <cstring>
using namespace std;

int calc(char *str)
{
    //TODO
    int base = 1;
    int decimal = 0;
    int size = strlen(str);
    for (int i = size - 1; i >= 0; i--)
    {
        if (str[i] == '1')
            decimal += base;
        base *= 2;
    }
    return decimal;
}
int main()
{
    char str[] = "001011"; //11
    cout << calc(str);
    return 0;
}