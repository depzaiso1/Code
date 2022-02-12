#include <bits/stdc++.h>
using namespace std;

int diagonalDiff(int arr[][1000], int row, int col, int x, int y)
{
    int dif = 0;
    for (int i = 0, j = 0; i < x, j < y; i++, j++)
    {
        dif += arr[i][j];
    }
    for (int i = x - 1, j = y - 1; i >= 0, j >= 0; i--, j--)
    {
        dif -= arr[i][j];
    }
    dif = (dif > 0) ? dif : -dif;
    return dif;
}
int main()
{
    int arr[][1000] = {{88, 72, 65, 37}, {82, 84, 34, 12}, {74, 46, 88, 44}};
    cout << diagonalDiff(arr, 3, 4, 1, 0);
    return 0;
}