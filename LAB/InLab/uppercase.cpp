#include <iostream>
#include <cstring>

using namespace std;
void uppercase(string output)
{
    // TODO
    char *s = new char[output.size()];
    strcpy(s, output.c_str());
    for (int i = 0; i <= strlen(s); i++)
    {
        toupper(s[i]);
    }
    cout << s;
}
int main()
{
    string output;
    cin >> output;
    uppercase(output);
}