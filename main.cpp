#include <bits/stdc++.h>
using namespace std;

string enterLaptop(string tag, string message)
{
    // ifstream inputfile;
    // inputfile.open(tag);
    string Email;
    string address;

    getline(cin, Email);
    getline(cin, address);
    string email = Email.substr(7);

    int n3 = stoi(address);

    string res = email + ";";

    string cnt = "";
    for (int i = 0; i < n3.length(); i++)
    {
        if (n3[i] > 57 || n3[i] < 48)
            break;
        cnt += n3[i];
    }

    for (int i = 0; i < stoi(cnt); i++)
    {
        result += message;
    }
    inputfile.close();
    return result;
}