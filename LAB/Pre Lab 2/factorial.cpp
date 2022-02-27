#include <iostream>
using namespace std;

int findMax(int *vals, int numEls)
{
    int max = -1e6;
    for (int i = 0; i < numEls; i++)
    {
        if (vals[i] > max)
            max = vals[i];
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << findMax(a, n);
    return 0;
}