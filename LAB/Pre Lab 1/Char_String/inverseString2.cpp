#include <bits/stdc++.h>
using namespace std;

void process(const char *str, char *outstr)
{
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        outstr[i] = str[size - i];
    }
    outstr[size] = '\0';
}
int main()
{
    char str[] = "this is my school";
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}