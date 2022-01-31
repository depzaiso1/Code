#include <iostream>
#include <string>

using namespace std;

void findAllIndex(string s1, string s2)
{
    int size = s1.length();
    int n = 0;
    int cnt = 0;
    while (n < size)
    {
        int a = s1.find(s2, n);
        if (a <= 0 && cnt > 0)
            break;
        cout << a << ' ';
        n = a + 1;
        cnt++;
    }
    if (cnt == 0)
        cout << -1;
}

int main()
{
    string s1 = "Truong Dai hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1, s2);
    return 0;
}