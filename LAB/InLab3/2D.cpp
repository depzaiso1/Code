#include <iostream>
using namespace std;

int **readArray()
{
    int **arr = new int *[10];
    for (int k = 0; k < 10; k++)
    {
        arr[k] = new int[10];
    }
    int i = 0;
    while (i < 10)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                for (int b = j; b < 10; b++)
                {
                    arr[i][b] = 0;
                }
                break;
            }
        }
        i++;
    }
    return arr;
}
