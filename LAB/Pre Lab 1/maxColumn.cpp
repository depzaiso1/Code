#include <bits/stdc++.h>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col)
{
    int max = -100;
    int max_index = 0;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            max_index = j;
        }
    }
    return max_index;
}

int main()
{
    int arr[][1000] = {{-44, 64, -6}, {87, 92, -19}, {-92, 53, -38}, {-39, -92, 21}};
    cout << findMaxColumn(arr, 4, 3);
    return 0;
}