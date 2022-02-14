// Student may implement another function as need
#include <bits/stdc++.h>
using namespace std;
void printFirstRepeatedWord(char str[])
{
    // TODO
    char word[100][100];
    int i = 0, j = 0, k, count = 0;
    for (int k = 0; str[k] != '\0'; k++)
    {
        if (str[k] != ' ' && str[k] != '\0')
        {
            word[i][j++] = str[k];
        }
        else
        {
            word[i][j] = '\0';
            i++;
            j = 0;
        }
    }
    for (int m = 0; m < i + 1; m++)
    {
        for (int n = m + 1; n < i + 1; n++)
        {
            if (strcmp(word[m], word[n]) == 0)
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout << word[m];
            break;
        }
    }
    if (count == 0)
    {
        cout << "No Repetition";
    }
}
int main()
{
    char str[] = "car taxi bike bike car taxi";
}