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

long long primeabove(long long &num)
{
    if (num <= 2)
        return 2;
    int check = 0;
    for (int i = 1; i * i <= num; i++)
        if (num % i == 0)
            check++;

    while (check != 1)
    {
        num++;
        check = 0;
        for (int i = 1; i * i <= num; i++)
            if (num % i == 0)
                check++;
    }
    return num;
}

long long fibobelow(long long &num)
{
    if (num == 1)
        return 1;
    long long fibo[500];
    fibo[0] = 1;
    fibo[1] = 1;
    int i;
    for (i = 2; i < 500; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        if (fibo[i] >= num)
            break;
    }
    return fibo[i];
}

string notebook1(string ntb1)
{
    // Complete this function to gain point
    ifstream quang(ntb1);
    int num;
    string str;
    quang >> str;
    int check = 0;
    int n1 = 0;
    string s = "0000000000";
    for (int i = 11; i <= 13; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            check++;
        }
        n1 += (str[i] - 48) * pow(10, 13 - i);
    }
    if (check != 0 || n1 == 0)
    {
        return "0000000000";
    }
    for (int i = 0; i < n1; i++)
    {
        quang >> num;
        s[num] += 1;
        if (s[num] > '9')
        {
            s[num] -= 10;
        }
    }
    quang.close();
    return s;
}

string notebook2(string ntb2)
{
    // Complete this function to gain point
    ifstream quang(ntb2);
    string str;
    string data;
    int check = 0;
    int n2 = 0;
    string s1 = "Pink";
    string s2 = "pink";
    int pos = 0;
    long long cntP = 0;
    quang >> str;
    for (int i = 0; i < 5; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            check++;
        }
        n2 += (str[i] - 48) * pow(10, 4 - i);
    }
    if (check != 0 || !(n2 >= 5 && n2 <= 100))
    {
        return "1111111111";
    }
    for (long long i = 0; i < n2; i++)
    {
        getline(quang, data);
        string s3 = data;
        while (s3.find(s1) != string::npos)
        {
            pos += s3.find(s1);
            cntP++;
            s3 = data.substr(pos + s1.length());
            pos += s1.length();
        }
        pos = 0;
        s3 = data;
        while (s3.find(s2) != string::npos)
        {
            pos += s3.find(s2);
            cntP++;
            s3 = data.substr(pos + s2.length());
            pos += s2.length();
        }
        pos = 0;
    }
    if (cntP <= 10000)
    {
        cntP *= cntP;
    }
    while (cntP < 1000000000)
    {
        cntP = cntP * 10 + 9;
    }
    string s = to_string(cntP);
    quang.close();
    return s;
}

string notebook3(string ntb3)
{
    // Complete this function to gain point
    ifstream quang(ntb3);
    string str;
    long long num;
    long long arr[10][10];
    long long temp = 0;
    long long res = 0;
    int pos = 0;
    for (int i = 0; i < 10; i++)
    {
        getline(quang, str);
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == '|' || str[j] == '-')
            {
                str[j] = ' ';
            }
        }
        stringstream ss(str);
        int p = 0;
        while (ss >> num)
        {
            arr[i][p] = num;
            p++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
            {
                arr[i][j] = primeabove(arr[i][j]);
            }
            if (i > j)
            {
                arr[i][j] = fibobelow(arr[i][j]);
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            for (int j = 7; j < 9; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
    }
    string s = "";
    for (int i = 0; i < 10; i++)
    {
        pos = 0;
        long long max = arr[i][0];
        for (int j = 1; j < 10; j++)
        {
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
                pos = j;
            }
        }
        s += pos + '0';
    }
    quang.close();
    return s;
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
