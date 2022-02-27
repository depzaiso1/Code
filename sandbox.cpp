#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Freq/First/01x";
    int number = stoi(s.substr(11, 3));
    cout << number << '\n';
    return 0;
}