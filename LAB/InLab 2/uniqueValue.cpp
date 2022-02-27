#include <iostream>
using namespace std;
bool checkElementsUniqueness(int *arr, int n)
{
    // Write your code
    bool flag = true;
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[i] == arr[j])
            {
                flag = false;
                break;
            }
        }
    }

    return flag;
}
bool checkDuplicate(int *ar, int size)
{
    if (size <= 1)
    {
        return true;
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (ar[i] == ar[size - 1])
    {
        return false;
    }
}
return checkDuplicate(ar, size - 1);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << checkDuplicate(arr, n);
    delete[] arr;
}