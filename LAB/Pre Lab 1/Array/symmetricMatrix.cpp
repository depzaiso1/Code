#include <bits/stdc++.h>
using namespace std;

bool isSymmetric(int arr[][1000], int row, int col)
{
    int k, j;
    for (k = 0; k < row; k++)
        for (j = 0; j < col; j++)
        {
            if (arr[k][j] != arr[j][k])
            {
                return false;
            }
        }
    return true;
}
int main()
{
    int arr[][1000] = {{1, 4, 6}, {4, 5, 3}, {6, 3, 9}};
    cout << isSymmetric(arr, 3, 3);
}