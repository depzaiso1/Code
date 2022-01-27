#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 && n == 3)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int primeColumns(int arr[][1000], int row, int col)
{

    int sum[col];

    int cnt = 0;
    //bool flag = true;
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            sum[j] += arr[i][j];
        }
    }
    for (int i = 0; i < col; i++)
    {
        int temp = sum[i];
        if (isPrime(temp))
            cnt++;
    }
    return cnt;
}
int main()
{
    int arr[][1000] = {{34, -15, 11, -70, -23, 24}, {-39, -90, 63, -45, -52, 48}, {-42, 92, 55, 92, 82, 81}};
    cout << primeColumns(arr, 3, 6);
}