#include <iostream>
#include <string>
using namespace std;

char curchar;
int cnt;
string str = "";
int pos = 0;
void cnt_substr(char &ch, int &size)
{
    size = 0;
    ch = str[pos];
    while (pos < str.size() && ch == str[pos])
    {
        pos++;
        size++;
    }
}
int maxLength(string string)
{
    int size = string.length();
    char ch;
    pos = 0;
    cnt_substr(curchar, cnt);
    while (pos < str.size())
    {
        cnt_substr(ch, size);
        if (size > cnt)
        {
            curchar = ch;
            cnt = size;
        }
    }
    return cnt;
}
int main()
{
    cin >> str;
    cout << maxLength(str);
    return 0;
}