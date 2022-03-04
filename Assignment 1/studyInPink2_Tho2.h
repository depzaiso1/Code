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
    ifstream inputfile(ntb1);
    string s;
    inputfile >> s;
    string num = s.substr(11, 3);
    for (char x : num)
    {
        if (x < 48 || x > 57)
            return "0000000000";
    }
    int n1 = stoi(num);
    int s0 = 0;
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int s4 = 0;
    int s5 = 0;
    int s6 = 0;
    int s7 = 0;
    int s8 = 0;
    int s9 = 0;
    int z = 0;
    while (n1--)
    {
        int a;
        inputfile >> a;
        if (a == 0)
            s0++;
        if (a == 1)
            s1++;
        if (a == 2)
            s2++;
        if (a == 3)
            s3++;
        if (a == 4)
            s4++;
        if (a == 5)
            s5++;
        if (a == 6)
            s6++;
        if (a == 7)
            s7++;
        if (a == 8)
            s8++;
        if (a == 9)
            s9++;
        z++;
    }
    string res0, res1, res2, res3, res4, res5, res6, res7, res8, res9;
    res0 = to_string(s0 % 10);
    res1 = to_string(s1 % 10);
    res2 = to_string(s2 % 10);
    res3 = to_string(s3 % 10);
    res4 = to_string(s4 % 10);
    res5 = to_string(s5 % 10);
    res6 = to_string(s6 % 10);
    res7 = to_string(s7 % 10);
    res8 = to_string(s8 % 10);
    res9 = to_string(s9 % 10);
    string res = res0 + res1 + res2 + res3 + res4 + res5 + res6 + res7 + res8 + res9;
    inputfile.close();
    return res;
}
string notebook2(string ntb2)
{
    ifstream inputfile(ntb2);
    string number;
    inputfile >> number;
    if (number.length() > 5)
        return "1111111111";
    for (char x : number)
    {
        if (x < 48 || x > 57)
            return "1111111111";
    }
    int n = stoi(number);
    if (n < 5 || n > 100)
        return "1111111111";

    int count = 0;
    int viTri;
    inputfile.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(inputfile, s);
        viTri = 0;
        while (true)
        {
            int a = s.find("Pink", viTri);
            if (a < 0)
                break;
            count++;
            viTri = a + 1;
        }
        viTri = 0;
        while (true)
        {
            int a = s.find("pink", viTri);
            if (a < 0)
                break;
            count++;
            viTri = a + 1;
        }
    }
    if (count < 10000)
        count = count * count;
    string res = to_string(count);
    string them9 = "9";
    for (int i = res.length(); i < 10; i++)
    {
        res = res + them9;
    }
    inputfile.close();
    return res;
}
bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

string notebook3(string ntb3)
{
    ifstream inputfile(ntb3);
    int array2D[10][10];
    for (int i = 0; i < 10; i++)
    {
        string l;
        getline(inputfile, l);

        for (int idx = 0; idx < (int)l.length(); idx++)
            if (l[idx] == '|' or l[idx] == '-')
                l[idx] = ' ';

        stringstream ss(l);
        string num;
        int j = 0;

        while (ss >> num)
        {
            array2D[i][j] = stoi(num);
            // cout << array2D[i][j] << " ";
            j++;
        }
        // cout << j;
    }

    for (int i = 0; i < 9; i++)
        for (int j = i + 1; j < 10; j++)
            while (!isprime(array2D[i][j]))
                array2D[i][j]++;

    for (int i = 1; i < 10; i++)
        for (int j = 0; j < i; j++)
        {
            int count = 0;
            while (true)
            {
                if (fibonacci(count) >= array2D[i][j])
                {
                    array2D[i][j] = fibonacci(count);
                    break;
                }
                count++;
            }
        }
    for (int i = 0; i < 10; i++)
    {
        int temp[3];
        int k = 0;
        for (int j = 7; j < 10; j++)
        {
            temp[k] = array2D[i][j];
            k++;
        }
        while (1)
        {
            bool flag = true;
            if (temp[0] > temp[1])
            {
                int tmp;
                tmp = temp[0];
                temp[0] = temp[1];
                temp[1] = tmp;
                flag = false;
            }

            if (temp[1] > temp[2])
            {
                int tmp;
                tmp = temp[1];
                temp[1] = temp[2];
                temp[2] = tmp;
                flag = false;
            }

            if (flag)
                break;
        }
        k = 0;
        for (int j = 7; j < 10; j++)
        {
            array2D[i][j] = temp[k];
            k++;
        }
    }
    string res = "";
    for (int i = 0; i < 10; i++)
    {
        int pos = 0;
        int max = array2D[i][0];
        for (int j = 1; j < 10; j++)
        {
            if (array2D[i][j] >= max)
            {
                max = array2D[i][j];
                pos = j;
            }
        }
        res += to_string(pos);
    }
    inputfile.close();
    return res;
}

string g(string p1, string p2)
{
    string out = "";
    int num;
    int remain = 0;
    for (int i = 0; i < 10; i++)
    {
        num = p1[i] - 48 + p2[i] - 48 + remain;
        if (num > 9)
        {
            num -= 10;
            remain = 1;
        }
        else
            remain = 0;
        out += to_string(num);
    }
    return out;
}

string generateListPasswords(string pwd1, string pwd2, string pwd3)
{
    // Complete this function to gain point
    return pwd1 + ";" + pwd2 + ";" + pwd3 + ";" + g(pwd1, pwd2) + ";" + g(pwd1, pwd3) + ";" + g(pwd2, pwd3) + ";" + g(g(pwd1, pwd2), pwd3) + ";" + g(pwd1, g(pwd2, pwd3)) + ";" + g(g(pwd1, pwd2), g(pwd1, pwd3));
}

bool chaseTaxi(
    int arr[100][100],
    string points,
    string moves,
    string &outTimes,
    string &outCatchUps)
{
    // Complete this function to gain point
    int n = moves.length();
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = -9;
        }
    }
    arr[0][0] = 0;

    int v = 0, quantity = 0;
    while (true)
    {
        int s = points.find("(", v);
        if (s < 0)
            break;
        v = s + 1;
        quantity++;
    }
    int toado[2 * quantity + 2];
    toado[0] = toado[1] = 0;
    for (int i = 0; i < points.length(); i++)
    {
        if (points[i] == '(' || points[i] == '-' || points[i] == ')' || points[i] == ',')
        {
            points[i] = ' ';
        }
    }
    stringstream ss(points);
    string num;
    int u = 2;
    while (ss >> num)
    {
        toado[u++] = stoi(num);
    }
    int a[quantity + 1];
    int b[quantity + 1];
    int ida = 0, idb = 0;
    for (int i = 0; i < 2 * quantity + 2; i = i + 2)
    {
        a[ida++] = toado[i];
    }
    for (int i = 1; i < 2 * quantity + 2; i = i + 2)
    {
        b[idb++] = toado[i];
    }
    // Array + move taxi
    int tam = 0;
    int x = 0;
    int y = 0;
    int fc[moves.length() + 1];
    int sc[moves.length() + 1];
    fc[0] = 0;
    sc[0] = 0;
    for (int i = 0; i < moves.length(); i++)
    {
        switch (moves[i])
        {
        case 'U':
            if (y != 0)
            {
                y--;
                arr[y][x] = tam + 9;
                tam = arr[y][x];
                fc[i + 1] = y;
            }
            fc[i + 1] = y;
            sc[i + 1] = sc[i];
            break;

        case 'D':
            if (y != 99)
            {
                y++;
                arr[y][x] = tam + 9;
                tam = arr[y][x];
                fc[i + 1] = y;
            }
            fc[i + 1] = y;
            sc[i + 1] = sc[i];
            break;
        case 'R':
            if (x != 99)
            {
                x++;
                arr[y][x] = tam + 9;
                tam = arr[y][x];
                sc[i + 1] = x;
            }
            sc[i + 1] = x;
            fc[i + 1] = fc[i];
            break;
        case 'L':
            if (x != 0)
            {
                x--;
                arr[y][x] = tam + 9;
                tam = arr[y][x];
                sc[i + 1] = x;
            }
            sc[i + 1] = x;
            fc[i + 1] = fc[i];
            break;
        }
    }
    bool flag = false;
    int count = 0;
    int temp = 0;
    for (int i = 1; i < quantity + 1; i++)
    {
        outTimes += to_string(temp + 14 * (abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1])));
        temp = temp + 14 * (abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]));
        for (int j = 0; j < moves.length() + 1; j++)
        {
            if (a[i] == fc[j] && b[i] == sc[j])
            {
                if (arr[fc[j]][sc[j]] >= temp)
                {
                    outCatchUps += "Y";
                    count++;
                    for (int k = i; k < quantity; k++)
                    {
                        outTimes = outTimes + ";" + "-";
                        outCatchUps = outCatchUps + ";" + "-";
                    }
                    // cout << flag << " " << outTimes << " " << outCatchUps;
                    return true;
                }
                outTimes += ";";
                outCatchUps = outCatchUps + "N" + ";";
                break;
            }
            if (j == moves.length())
            {
                outTimes += ";";
                outCatchUps = outCatchUps + "N" + ";";
            }
        }
        if (count > 0)
            break;
    }
    outTimes.pop_back();
    outCatchUps.pop_back();
    return false;
}
string enterLaptop(string tag, string message)
{
    ifstream inputfile;
    inputfile.open(tag);
    string mail;
    string number;
    getline(inputfile, mail);
    getline(inputfile, number);
    string email = mail.substr(7);
    string result = email + ";";
    string number1 = number.substr(9);
    int i = 0;
    string k = "";
    for (int i = 0; i < number1.length(); i++)
    {
        if (number1[i] > 57 || number1[i] < 48)
            break;
        k += number1[i];
    }
    for (int i = 0; i < stoi(k); i++)
    {
        result += message;
    }
    inputfile.close();
    return result;
}

////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
