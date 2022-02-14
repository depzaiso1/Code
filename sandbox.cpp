#include <bits/stdc++.h>
using namespace std;

void calSum(string filename)
{
    ifstream ifs(filename);
    long long n;
    long long sum = 0;
    while (ifs >> n)
    {
        sum += n;
    }
    cout << sum << '\n';
    ifs.close();
}
int main()
{
    string filename("input.txt");
    calSum(filename);
    system("pause");
    return 0;
}