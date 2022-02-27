#include <iostream>
#include <string.h>
using namespace std;

int strLen(const char *str)
{
    if (*str == 0)
    {
        return 0;
    }
    return strLen(str + 1) + 1;
}
bool isPalindrome(const char *str)
{
    int size = strLen(str);
    for (int i = 0; i < size; i++)
    {
        if (str[i] != str[size - i - 1])
            return false;
    }
    return true;
}

int main()
{
    const char *str = "hcmut";
    cout << strLen(str) << endl;
    cout << isPalindrome(str);
}