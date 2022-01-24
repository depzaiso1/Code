#include <bits/stdc++.h>

using namespace std;

void process(const char *name, char *outstr)
{
    // TODO
    char *temp = new char[strlen(name) + 1];
    int j = 0;
    for (int i = 0; i < strlen(name) + 1; i++)
    {
        if (('a' <= name[i] && name[i] <= 'z') || ('A' <= name[i] && 'Z' >= name[i]))
        {
            temp[i] = name[i];
        }
        else
            temp[i] = ' ';
    }
    temp[strlen(name) - 1] = '\0';
    for (int i = 0; i < strlen(temp) + 1; i++)
    {
        if (i == 0 || temp[i - 1] == ' ')
        {
            if ('a' <= temp[i] && temp[i] <= 'z')
            {
                outstr[j] = temp[i] - 32;
                j++;
            }
            else if ('A' <= temp[i] && temp[i] <= 'Z')
            {
                outstr[j] = temp[i];
                j++;
            }
        }
        else if ('A' <= temp[i] && temp[i] <= 'Z')
        {
            outstr[j] = temp[i] + 32;
            j++;
        }
        else if (('a' <= temp[i] && temp[i] <= 'z') || temp[i - 1] != ' ')
        {
            outstr[j] = temp[i];
            j++;
        }
    }
    outstr[strlen(outstr) - 1] = '\0';
}
int main()
{
    char str[] = "doAn VAN *(()hau @!#$";
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}