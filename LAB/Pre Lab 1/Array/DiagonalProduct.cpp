#include <bits/stdc++.h>
using namespace std;

int diagonalProduct(int arr[][1000], int row, int col)
{
    int res = 1;
    int j = 0;
    for (int i = 0, j = 0; i < row, j < col; i++, j++)
    {
        res *= arr[i][j];
    }
    return res;
}
int main()
{
    int arr[][1000] = {{-45, 18, -37}, {-2, -31, 24}, {-48, -33, -48}};
    cout << diagonalProduct(arr, 3, 3);

    return 0;
}