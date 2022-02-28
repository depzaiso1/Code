#include <bits/stdc++.h>
using namespace std;
string notebook2(string ntb2)
{
    // Complete this function to gain point
    // ifstream fin(ntb2);
    // fin.open(ntb2);
    string data;
    cin >> data;
    int size = data.length();
    int cntP = 0;
    if (size != 5)
        return "1111111111";

    for (char x : data)
    {
        if (x < '0' || x > '9')
            return "1111111111";
    }

    int n2 = stoi(data);
    if (n2 < 5 || n2 > 100)
        return "1111111111";

    for (int i = 0; i < n2 + 1; i++)
    {
        string str;
        getline(cin, str);
        int pos = 0;
        while (true)
        {
            int pnk = str.find("Pink", pos);
            if (pnk < 0)
                break;
            cntP += 1;
            pos = pnk + 1;
        }
        pos = 0;
        while (true)
        {
            int pnk = str.find("pink", pos);
            if (pnk < 0)
                break;
            cntP += 1;
            pos = pnk + 1;
        }
    }
    cout << cntP; // debug
    if (countDigit(cntP) < 5)
        cntP *= cntP;
    string strP = to_string(cntP);
    while (strP.size() < 10)
    {
        strP = strP + "9";
    }
    // fin.close();
    return strP;
}
int main()
{
    string str = "00004";
    int size = str.size();
    cout << size;
}