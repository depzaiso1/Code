#include <bits/stdc++.h>
using namespace std;

void addElement(int *&arr, int n, int val, int index)
{
    int n1 = n + 1;
    int *b = new int[n1];

    b[index] = val;
    for (int i = 0; i < index; i++)
    {
        b[i] = arr[i];
    }
    for (int i = index + 1; i < n1; i++)
    {
        b[i] = arr[i - 1];
    }
    arr = b;

    // debug
}

int main()
{
    int n, x, pos;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    cin >> pos;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    addElement(a, n, x, pos);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}