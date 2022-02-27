#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Freq/First/012";
    string numb = str.substr(11, 3);
    int number = stoi(numb);
    cout << number << '\n';
}