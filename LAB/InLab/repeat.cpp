#include <bits/stdc++.h>
using namespace std;
bool findStr(char *str, char *split, int idx)
{
    int l = strlen(str);
    int ls = strlen(split);
    int count = 0;
    if (idx + 1 + ls > l)
        return false;

    for (int i = idx + 1; i < l; i++)
    {
        bool flag = true;
        if (str[i] == split[0] && i + ls <= l)
        {
            for (int k = 1; k < ls; k++)
            {
                if (str[i + k] != split[k])
                {
                    flag = false;
                    break;
                }
            }
            if (flag && (str[i + ls] == ' ' or i + ls == l))
                return true;
        }
    }
    return false;
}

void printFirstRepeatedWord(char *str, char *outstr)
{
    char *change = new char[strlen(str) + 1];
    int l = strlen(str);
    int j = 0;
    bool flag = false;
    for (int i = 0; i < l; i++)
    {

        if (str[i] == ' ')
        {
            change[j] = '\0';
            if (findStr(str, change, i))
            {
                for (int m = 0; m < (int)strlen(change); m++)
                    outstr[m] = change[m];
                outstr[(int)strlen(change)] = '\0';
                flag = true;
                break;
            }
            j = 0;
            change = new char[strlen(str) + 1];
            continue;
        }
        change[j++] = str[i];
        if (i == l - 1)
            break;
    }
    if (!flag)
    {
        char end[] = "No Repetition";
        for (int m = 0; m < (int)strlen(end); m++)
            outstr[m] = end[m];
        outstr[(int)strlen(end)] = '\0';
    }
}
int main()
{
    char str[] = "football voleyball badminton footballl";
    char *outstr = new char[strlen(str) + 1];

    printFirstRepeatedWord(str, outstr);
    cout << outstr;
}