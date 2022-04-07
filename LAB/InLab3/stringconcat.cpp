#include <iostream>
using namespace std;

char *concatStr(char *str1, char *str2)
{
}
int main()
{
    char s1[] = "Hello, ";
    char s2[] = "how are you?";
    char *s = concatStr(s1, s2);
    cout << s;
    delete[] s;
}