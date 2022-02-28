/*
 * Ho Chi Minh City University of Technology
 * Faculty of Computer Science and Engineering
 * Initial code for Assignment 1
 * Programming Fundamentals Spring 2022
 * Author: Vu Van Tien
 * Date: 10.02.2022
 */

// The library here is concretely set, students are not allowed to include any other libraries.
#ifndef studyInPink_h
#define studyInPink_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
/// STUDENT'S ANSWER BEGINS HERE
/// Complete the following functions
/// DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////
int cnt[10] = {0};
string notebook1(string ntb1)
{
    // Complete this function to gain point
    ifstream fin(ntb1);
    string data;
    fin >> data;
    int size = data.length();
    string numb = data.substr(11, 3);
    for (char x : numb)
    {
        if (x <= 48 && x >= 57)
            return "000000000";
    } // check valid
    int n1 = stoi(numb);
    // cout << numb << endl;
    // cout << n1 << endl;l;
    int cnt[10] = {0};
    while (n1--)
    {
        int x;
        fin >> x; // cin >> x sai
        cnt[x] = (cnt[x] + 1) % 10;
    }

    // output result 100000
    string res = "";
    for (int i = 0; i < 10; i++)
    {
        res += to_string(cnt[i]);
    }
    return res;
    // return "000000000";
}

int countDigit(int n)
{
    return floor(log10(n) + 1);
}
string notebook2(string ntb2)
{
    // Complete this function to gain point
    ifstream fin(ntb2);
    string data;
    fin >> data;
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
        getline(fin, str);
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
    return strP;
}

string notebook3(string ntb3)
{
    // Complete this function to gain point
    return "000000000";
}
string generateListPasswords(string pwd1, string pwd2, string pwd3)
{
    // Complete this function to gain point
    return "000000000";
}

bool chaseTaxi(
    int arr[100][100],
    string points,
    string moves,
    string &outTimes,
    string &outCatchUps)
{
    // Complete this function to gain point
    return false;
}

string enterLaptop(string tag, string message)
{
    // Complete this function to gain point
    return "";
}

////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
