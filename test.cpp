#include <bits/stdc++.h>

using namespace std;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int toPrime(int n)
{
    if (isPrime(n))
        return n;
    return toPrime(n + 1);
}

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}

int toFibonacci(int n)
{
    if (isFibonacci(n))
        return n;
    return toFibonacci(n + 1);
}
// function
int main()
{
    // ifstream fin(ntb3);
    int a[10][10];

    for (int i = 0; i < 10; i++)
    {
        string data;
        getline(cin, data);

        for (int id = 0; id < data.size(); id++)
            if (data[id] == '|' || data[id] == '-')
                data[id] = ' ';

        stringstream ss(data);
        int num;
        int j = 0;

        while (ss >> num)
        {
            a[i][j] = (num);
            j++;
        }
    } /// xong nhap vao mang hai chieu

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            a[i][j] = toPrime(a[i][j]);
        }
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            a[i][j] = toFibonacci(a[i][j]);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i][8] < a[i][7])
            swap(a[i][7], a[i][8]);

        if (a[i][9] < a[i][8])
        {
            swap(a[i][8], a[i][9]);
            if (a[i][8] < a[i][7])
                swap(a[i][8], a[i][7]);
        }
    }
    string res = "";
    for (int i = 0; i < 10; i++)
    {
        int pos = 0;
        int max = a[i][0];
        for (int j = 1; j < 10; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
                pos = j;
            }
        }
        // res += to_string(pos);
        cout << pos;
    }

    // debug
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}