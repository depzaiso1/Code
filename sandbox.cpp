#include <bits/stdc++.h>
using namespace std;

vector<int> cnt(10, 0);
bool check = 0;

string cur_val, res;

void backtracking(string &s, int idx, bool isSmaller)
{
    if (check)
    {
        return;
    }
    if (idx == s.size())
    {
        res = cur_val;
        check = 1;
        return;
    }
    char x = s[idx];
    if (isSmaller)
    {
        x = '9';
    }
    for (char i = x; i >= '0' && !check; i--)
    {
        if (cnt[i - '0'] < 2)
        {
            cnt[i - '0']
        }
    }
}

int main()
{
}