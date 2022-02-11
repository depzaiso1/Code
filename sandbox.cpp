#include <bits/stdc++.h>
using namespace std;

template <typename T, typename U>
T add(T num1, U num2)
{
    return (num1 + num2);
}
int main()
{
    double a = 4.1, b = 6.0;
    double c = add<double, int>(a, b);

    cout << "Total of a and b is " << c << endl;
    return 0;
}