#include <bits/stdc++.h>
using namespace std;

void process(const char *str, char *outstr)
{
    int size = strlen(str);
    char *temp = new char[strlen(str) + 1];
    int j = 0;
    for (int i = 0; i < strlen(str) + 1; i++)
    {
        if (j == 0)
        {
            if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && 'Z' >= str[i]))
            {
                temp[0] = str[i];
                j++;
            }
        }
        else if (str[i] == ' ' && ('a' <= str[i + 1] && str[i + 1] <= 'z') || 'A' <= str[i + 1] && str[i + 1] <= 'Z')
        {
            temp[j] = str[i];
            temp[j + 1] = str[i + 1];
            j++;
        }
        else if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && 'Z' >= str[i]))
        {
            temp[j] = str[i];
            j++;
        }
    }
    temp[j] = '\0';
    for (int i = 0; i < strlen(temp); i++)
    {
        outstr[i] = temp[i];
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    char str[] = "   abc   gef   dd  cef     ";
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}