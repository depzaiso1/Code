#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = "doAn VAN *(()hau @!#$";
    char *outstr = new char[strlen(str) + 1];
    int j = 0;
    for (int i = 0; i < strlen(str) + 1; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            if ('a' <= str[i] && str[i] <= 'z')
            {
                outstr[j] = str[i] - 32;
                j++;
            }
            else if ('A' <= str[i] && str[i] <= 'Z')
            {
                outstr[j] = str[i];
                j++;
            }
        }
        else 
    }

    cout << outstr;
    cout << "run";
    return 0;
}