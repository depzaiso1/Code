#include <iostream>
using namespace std;
bool completeNum(int N)
{
    int total = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            total += i;
        }
    }
    if (total == N)
        return true;
    else
        return false;
}

int main()
{
    int N;
    cin >> N;
    cout << completeNum(N);
    return 0;
}