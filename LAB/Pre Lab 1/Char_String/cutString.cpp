#include <bits/stdc++.h>
using namespace std;

void cutString(string s, int index)
{
    for (int i = index; i < s.length(); i++)
    {
        cout << s[i];
    }
}
int main()
{
    string s = "Truong Dai Hoc Bach Khoa.";
    cutString(s, 7);
    return 0;
}