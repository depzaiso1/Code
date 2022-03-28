#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int i = 0, j = 1;
        int cnt = 0;
        while (j < n)
        {
            if (s[i] == '0' && s[j] == '0')
            {
                cnt += 2;
                i = j;
                j++;
            }
            else if (s[i] == '0' && s[j] == '1')
            {
                if (j + 1 == n)
                    break;
                else if (s[j + 1] == '0')
                {
                    cnt++;
                    i = j + 1;
                    j = j + 2;
                }
                else
                {
                    i = j + 1;
                    j = j + 2;
                }
            }
            else
            {
                i++;
                j++;
            }
        }
        if (n == 1 && s == "1")
            cout << 2 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}