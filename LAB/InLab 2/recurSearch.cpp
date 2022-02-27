#include <iostream>
using namespace std;
int recursiveSearch(int &n, int m, int arr[], int index)
{
    // Implement function content here
    if (index == n)
        return -1;

    if (arr[index] == m)
    {
        int temp = index;

        while (index < n - 1)
        {
            arr[index] = arr[index + 1];
            index++;
        }

        arr[n - 1] = '\0';

        n--;

        return temp;
    }

    return recursiveSearch(n, m, arr, index + 1);
}

int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];
    int i = 0;
    for (i; i < N; ++i)
    {
        cin >> arr[i];
    }
    int index = 0;
    cout << recursiveSearch(N, M, arr, index) << endl;
    for (i = 0; i < N; ++i)
    {
        cout << arr[i] << " ";
    }
}