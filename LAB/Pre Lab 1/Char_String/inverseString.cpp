#include <bits/stdc++.h>
using namespace std;

void process(const char *str, char *outstr)
{
    int size = strlen(str);
    int s1 = 0;
    int end = size;
    //sscout << size;
    while (s1 < size)
    {
        size--;
        char tmp = str[s1];
        outstr[s1] = str[size];
        outstr[size] = tmp;
        s1++;
    }
    outstr[end] = '\0';
}

int main()
{
    char str[] = "this is my school";
    //cout << str;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}