#include <bits/stdc++.h>
using namespace std;

int t, r, c;
const int MAXN = 2 * 10 + 2;
char a[MAXN][MAXN];

void solve()
{
    cin >> r >> c;
    a[0][0] = a[0][1] = a[1][0] = a[1][1] = '.';
    int i = 0, j = 2;
    while (j < 2 * c + 1)
    {
        a[0][j] = '+';
        a[0][j + 1] = '-';
        j += 2;
    }
    j = 2;
    while (j < 2 * c + 1)
    {
        a[1][j] = '|';
        a[1][j + 1] = '.';
        j += 2;
    }
    for (int i = 2; i < 2 * r + 1; i++)
    {
        for (int j = 0; j < 2 * c + 1; j += 2)
        {
            if (i % 2 == 0)
            {
                a[i][j] = '+';
                a[i][j + 1] = '-';
            }
            else
            {
                a[i][j] = '|';
                a[i][j + 1] = '.';
            }
        }
    }
    // debug
    for (int i = 0; i < 2 * r + 1; i++)
    {
        for (int j = 0; j < 2 * c + 1; j++)
        {
            cout << a[i][j];
        }
        cout << '\n';
    }
}

int main()
{
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {
        cout << "Case #" << tc << ":\n";
        solve();
    }
}