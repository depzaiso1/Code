#include <iostream>
using namespace std;
int sumD(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isSpecialNumber(int n)
{
    int sumd = sumD(n);
    if (isPrime(n) && isPrime(sumd))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << isSpecialNumber(n);
}