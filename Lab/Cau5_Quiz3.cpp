#include<iostream>

using namespace std;
int main()
{
    int days, years, weeks,remain;
    cin >> days;
    years = days / 365;
    remain = days % 365;
    weeks = remain / 7;
    remain = remain % 7;
    cout << days << " days = " << years << " years + " << weeks << " weeks + " << remain << " days";
    return 0;
}