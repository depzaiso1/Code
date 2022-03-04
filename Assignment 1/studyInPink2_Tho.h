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

string notebook1(string ntb1)
{
    // Complete this function to gain point
    ifstream quang(ntb1);
    int num;
    string str;
    quang >> str;
    int check = 0;
    int n1 = 0;
    for (int i = 11; i <= 13; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            check++;
        }
        n1 += (str[i] - 48) * pow(10, 13 - i);
    }
    if (check != 0)
    {
        return "0000000000";
    }
    string s = "0000000000";
    for (int i = 0; i < n1; i++)
    {
        quang >> num;
        s[num] += 1;
    }
    quang.close();
    return s;
}

string notebook2(string ntb2)
{
    // Complete this function to gain point
    return "000000000";
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