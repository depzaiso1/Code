#include <iostream>
#include <cstring>
using namespace std;

void process(const char *name, char *outstr)
{
    char *temp = new char[strlen(name) + 1];
    for (int i = 0, j = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ' || (name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122))
        {
            temp[j] = name[i];
            j++;
        }
    }
    temp[strlen(temp)] = '\0';

    bool flag = false;
    if (strlen(temp) == 1)
    {
        if (temp[0] == ' ')
            outstr[0] = '\0';
        else
        {
            outstr[0] = temp[0];
            outstr[1] = '\0';
        }
    }
    else
    {
        for (int i = 0, j = 0; i < strlen(temp), j < strlen(temp); i++)
        {
            if (temp[i] != ' ')
            {
                flag = true;
                outstr[j] = temp[i];
                j++;
            }
            else
            {
                if (flag)
                {
                    flag = false;
                    outstr[j] = temp[i];
                    j++;
                }
            }
        }
        if (outstr[strlen(outstr) - 1] == ' ')
            outstr[strlen(outstr) - 1] = '\0';
        else
            outstr[strlen(outstr)] = '\0';
    }
    flag = true;
    for (int i = 0; i < strlen(outstr); i++)
    {
        if (flag)
        {
            outstr[i] = toupper(outstr[i]);
            flag = false;
        }
        else
            outstr[i] = tolower(outstr[i]);
        if (outstr[i] == ' ')
        {
            flag = true;
            continue;
        }
    }
}

int main()
{
    char str[] = "doAn VAN *(()hau @!#$";
    //cout << strlen(str);
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}