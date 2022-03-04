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
    // fin.open(ntb1);
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
    // fin.close();
    return strP;
}

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int toPrime(int n)
{
    if (isPrime(n))
        return n;
    return toPrime(n + 1);
}

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}

bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perfect square
    return isPerfectSquare(5 * n * n + 4) ||
           isPerfectSquare(5 * n * n - 4);
}

int toFibonacci(int n)
{
    if (isFibonacci)
        return n;
    return toFibonacci(n + 1);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

string notebook3(string ntb3)
{
    // Complete this function to gain point
    ifstream fin(ntb3);

    int a[10][10];

    for (int i = 0; i < 10; i++)
    {
        string data;
        getline(fin, data);

        for (int id = 0; id < data.size(); id++)
            if (data[id] == '|' || data[id] == '-')
                data[id] = ' ';

        stringstream ss(data);
        int num;
        int j = 0;

        while (ss >> num)
        {
            a[i][j] = (num);
            j++;
        }
    } /// xong nhap vao mang hai chieu
    // STEP 1
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {

            a[i][j] = toPrime(a[i][j]);
        }
    }
    // step 2
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            a[i][j] = toFibonacci(a[i][j]);
        }
    }
    // step 3
    for (int i = 0; i < 10; i++)
    {
        if (a[i][8] < a[i][7])
            swap(a[i][7], a[i][8]);

        if (a[i][9] < a[i][8])
        {
            swap(a[i][8], a[i][9]);
            if (a[i][8] < a[i][7])
                swap(a[i][8], a[i][7]);
        }
    }
    int max[10] = {-1};
    string ans = "";
    for (int i = 0; i < 10; i++)
    {
        int max = a[i][0];
        int pos_max = 0;
        for (int j = 1; j < 10; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
                pos_max = j;
            }
        }
        ans += to_string(pos_max);
    }
    // debug
    return ans;
}

string g(string p1, string p2)
{
    string pass = ""; // result
    int numb;
    int sign = 0;
    for (int i = 0; i < 10; i++)
    {
        numb = (int)p1[i] + (int)p2[i] + sign;
        if (numb > 9)
        {
            numb = numb % 10;
            sign = 1;
        }
        else
        {
            sign = 0;
        }
        pass += to_string(numb);
    }
    return pass;
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

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = -9;
        }
    }
    arr[0][0] = 0;

    int row = 0, col = 0;
    int size = moves.size();
    // taxi run

    for (int i = 0; i < size; i++)
    {
        if (moves[i] == 'U')
        {
            if (row - 1 < 0)
                continue;
            arr[row - 1][col] = arr[row][col] + 9;
            row--;
        }
        if (moves[i] == 'D')
        {
            if (row + 1 == 100)
                continue;
            arr[row + 1][col] = arr[row][col] + 9;
            row++;
        }
        if (moves[i] == 'L')
        {
            if (col - 1 < 0)
                continue;
            arr[row][col - 1] = arr[row][col] + 9;
            col--;
        }
        if (moves[i] == 'R')
        {
            if (col + 1 == 100)
                continue;
            arr[row][col + 1] = arr[row][col + 1] + 9;
            col++;
        }
    } // taxi plus 9 in the arr[100][100]

    /// sherlock move
    int length = points.length();

    for (int i = 0; i < length; i++)
    {
        if (points[i] == '(' || points[i] == ')' || points[i] == '-' || points[i] == ',')
        {
            points[i] = ' ';
        }
    }
    stringstream convert(points);
    int coor;
    int p[1][100 * 100] = {};
    int index = 0, j = 0;
    while (convert >> coor)
    {
        if (index % 2 == 0)
        {
            p[0][j] = coor;
            index++;
        }
        else
        {
            p[1][j] = coor;
            index++;
            j++;
        }
    } // p[x][y];
    // TODO: Tinh thoi gian sherlock di chuyen

    int num_points = j;
    bool flag = false;

    int time[num_points];
    time[0] = 14 * (abs(p[1][0] - p[0][0]) + abs(p[1][1] - p[0][1]));
    for (int i = 1; i < num_points - 1; i++)
    {
        if (!flag)
        {
            time[i] = time[i - 1] + 14 * (abs(p[0][i] - p[0][i - 1]) + abs(p[1][i] - p[1][i - 1]));
            outTimes = outTimes + to_string(time[i]);
            if (arr[p[0][i]][p[1][i]] >= time[i])
            {
                flag = true;
                outCatchUps = outCatchUps + "Y"; // duoi kip
            }
            else
            {
                outCatchUps = outCatchUps + "N" + ";"; // chua duoi kip
                outTimes = outTimes + ";";
            }
        }
        else if (flag)
        {
            outTimes = outTimes + ";" + "-";
            outCatchUps = outCatchUps + ";" + "-"; // neu duoi kip roi, in tiep phan sau
        }
    }
    return flag;
}

string enterLaptop(string tag, string message)
{
    ifstream fin(tag);
    string Email;
    string address;

    getline(fin, Email);
    getline(fin, address);
    string email = Email.substr(7); // remove Email:

    string pwdL = email + ";";
    string add = address.substr(9); // remove Address:
    int n3 = stoi(add);

    for (int i = 0; i < n3; i++)
    {
        pwdL += message;
    }
    return pwdL;
}
////////////////////////////////////////////////
/// END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
