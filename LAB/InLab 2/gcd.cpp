#include <bits/stdc++.h>
using namespace std;
int gcdRecursion(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [1]
    // TODO
    int res;
    if (q == 0)
        res = p;
    else
        res = gcdRecursion(q, p % q);
    return res;
    // END YOUR EMPLEMENTATION [1]
}
int gcdIteration(int p, int q)
{
    // BEGIN YOUR IMPLEMENTATION [2]
    // TODO
    while (q != 0)
    {
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
    // END YOUR EMPLEMENTATION [2]
}
int main()
{
    int a = 9, b = 9;
    cout << gcdIteration(a, b) << endl;
    cout << gcdRecursion(a, b) << endl;
    return 0;
}