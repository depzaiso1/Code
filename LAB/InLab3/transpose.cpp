#include <iostream>
using namespace std;

int **transposeMatrix(int **matrix, int r, int c)
{
    // TODO
    int **res = new int *[c];
    for (int i = 0; i < c; i++)
    {
        res[i] = new int[r];
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            res[j][i] = matrix[i][j];
        }
    }
    if (r <= 0 || c <= 0)
        return nullptr;
    return res;
}
int main()
{
}