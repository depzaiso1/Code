/*
    * Ho Chi Minh City University of Technology
    * Faculty of Computer Science and Engineering
    * Initial code for Assignment 0
    * Programming Fundamentals Spring 2022
    * Author: Tran Huy
    * Date: 06.01.2022
*/

//The library here is concretely set, students are not allowed to include any other libraries.
#ifndef studyInPink_h
#define studyInPink_h

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////
void reset_exp(int &EXP)
{
    if (EXP > 900)
        EXP = 900; // Nếu vượt quá 900, trả về 900w
    if (EXP < 0)
        EXP = 0;
}
void reset_HP(int &HP)
{
    if (HP > 999)
        HP = 999;
    if (HP < 0)
        HP = 0;
}
void reset_money(int &M)
{
    if (M > 2000)
        M = 2000;
    //if(M2 > 2000) M2 = 2000;
    if (M < 0)
        M = 0;
    //if(M2 < 0) M2 = 0;
}

int firstMeet(int &EXP1, int &EXP2, const int &E1)
{
    //Complete this function to gain point on task 1
    if (E1 >= 0 && E1 <= 399)
    {
        if (E1 >= 0 && E1 <= 49)
            EXP2 += 25;
        if (E1 >= 50 && E1 <= 99)
            EXP2 += 50;
        if (E1 >= 100 && E1 <= 149)
            EXP2 += 85;
        if (E1 >= 150 && E1 <= 199)
            EXP2 += 75;
        if (E1 >= 200 && E1 <= 249)
            EXP2 += 110;
        if (E1 >= 250 && E1 <= 299)
            EXP2 += 135;
        if (E1 >= 300 && E1 <= 399)
            EXP2 += 160;

        if (E1 % 2 != 0)
            EXP1 = ceil(EXP1 + E1 * 1.0 / 10); //Afghanistan
        else
            EXP1 = ceil(EXP1 - E1 * 1.0 / 5); //Iraq
        reset_exp(EXP1);
        reset_exp(EXP2);
        return EXP1 + EXP2;
    }
    if (E1 >= 400 && E1 <= 999)
    {
        if (E1 >= 400 && E1 <= 499)
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 7 + 9)); //thong tin 1
        if (E1 >= 500 && E1 <= 599)
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 9 + 11)); // thong tin 2
        if (E1 >= 600 && E1 <= 699)
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 5 + 6)); // thong tin 3
        if (E1 >= 700 && E1 <= 799)
        {                                           // thong tin 4
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 7 + 9)); // giai thich thong tin 1
            if (EXP2 > 200)
            { // neu lon hon 200 thi giai thich thong tin 2
                EXP2 = ceil(EXP2 + (E1 * 1.0 / 9 + 11));
            }
            // neu < 200 thi ko giai thich
        }
        if (E1 >= 800 && E1 <= 999)
        { // thong tin 5 __ Giai thich ca 2 thong tin 1&2, update EXP Watson
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 7 + 9));//thong tin 1
            EXP2 = ceil(EXP2 + (E1 * 1.0 / 9 + 11));//thong tin 2
            if (EXP2 > 600)
            { // neu lon hon 600 giai thich thong tin 3
                EXP2 = ceil(EXP2 + (E1 + 1.0 / 5 + 6));
                EXP2 = ceil(EXP2 * 1.15);
                //GIAI THICH CA 3 THONG TIN --> WATSON cong them 15%
            }
        }
        EXP1 = ceil(EXP1 - 0.1 * E1); //Sau khi giải thích, Kinh nghiệm sherlock giảm đi 10%
        reset_exp(EXP1);
        reset_exp(EXP2);
        return EXP2 + EXP1;
    }
    return -999;
}

//nhiem vu 2
void ring_explain(int &EXP1, int &EXP2, const int &E2)
{
    double d = (E2 * 1.0 / 9 + 10);
    EXP1 = ceil(EXP1 + d / 3);
    EXP2 = ceil(EXP2 + d);
}
void jacket_explain(int &EXP1, int &EXP2, const int &E2)
{
    double d = (0.35 * E2);
    EXP1 = ceil(EXP1 + d / 3);
    EXP2 = ceil(EXP2 + d);
}
void luggage_explain(int &EXP1, int &EXP2, const int &E2)
{
    double d = (0.35 * E2) + (E2 * 1.0 / 9 + 10);
    EXP2 = ceil(EXP2 + 0.17 * d);
    EXP1 = ceil(EXP1 + (0.17 * d) / 3);
}

int investigateScene(int &EXP1, int &EXP2, int &HP2, int &M2, const int &E2)
{
    //Complete this function to gain point on task 2
    // Giai đoạn 1
    if (E2 >= 0 && E2 <= 999)
    {
        if (E2 >= 0 && E2 <= 299)
        { //GIAI THICH NHAN
            ring_explain(EXP1, EXP2, E2);
        }
        if (E2 >= 300 && E2 <= 499)
        { //GIAI    THICH AO KHOAC
            ring_explain(EXP1, EXP2, E2);
            jacket_explain(EXP1, EXP2, E2);
        }
        if (E2 >= 500 && E2 <= 999)
        { //GIAI THICH HANH LY
            ring_explain(EXP1, EXP2, E2);
            jacket_explain(EXP1, EXP2, E2);
            luggage_explain(EXP1, EXP2, E2);
        }

        //bat dau giai doan 2
        //Watson chạy và giảm HP
        HP2 = ceil(HP2 - ((E2 * E2 * E2) / pow(2, 23)));

        if (E2 % 2 == 0)
            M2 = ceil(M2 + (E2 * E2) * 1.0 / 50);
        reset_exp(EXP1);
        reset_exp(EXP2);
        reset_money(M2);
        reset_HP(HP2);
        return EXP2 + HP2 + M2 + EXP1;
    }
    else
        return -999;
}

void debug(int p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
int traceLuggage(int &HP1, int &EXP1, int &M1, const int &E3)
{
    //Complete this function to gain point on task 3
    int p1[9] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
    int p2[7] = {2, 3, 5, 7, 11, 13, 17};
    int p3[20];
    for (int i = 0, j = 2; i < 20; i++)
    {
        p3[i] = j * j;
        j += 2;
    }
    int p4[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (E3 >= 0 && E3 <= 999)
    {
        //initialize
        bool found1 = false;
        bool found2 = false;
        bool found3 = false;
        bool found4 = false;

        int k;

        //path 1
        //cout << "Path 1" << " ";
        for (int i = 0; i < 9; i++)
        {
            p1[i] = (int)ceil((p1[i] + E3)) % 26 + 65;

            if (p1[i] == 80)
            {
                found1 = true;
                k = i + 1;
                HP1 = HP1 - p1[i] * k * 2;
                EXP1 = EXP1 + (1000 - p1[i] * k) % 101;
                M1 = M1 - k * E3 * 1.0 / 9;
                break;
            }
        }
        if (!found1)
            M1 = ceil(M1 - 9 * 9 * E3 * 1.0 / 9);

        //path 2
        int s = 0, m = 0;
        for (int i = 0; i < 7; i++)
        {
            p2[i] = (p2[i] + E3) % 26; 
            s += p2[i];                
        }
        m = (int)ceil(s * 1.0 / 7); 
        for (int i = 0; i < 7; i++)
        {
            p2[i] = (p2[i] + s + m) % 26 + 65; 
            
            if (p2[i] == 80)
            {
                found2 = true; 
                k = i + 1;
                HP1 = HP1 - p2[i] * k * 2; 
                EXP1 = EXP1 + (1000 - p2[i] * k) % 101;
                M1 = M1 - k * E3 * 1.0 / 9; 
                break;
            }
        }
        if (!found2)
            M1 = ceil(M1 - 7 * 7 * E3 * 1.0 / 9); 

        int max = -1;
        for (int i = 0; i < 20; i++)
        {
            p3[i] = (p3[i] + E3 * E3) % 113;
            if (p3[i] > max)
                max = p3[i];
        }
        for (int i = 19; i >= 0; i--)
        {
            p3[i] = (int)ceil((p3[i] + E3) * 1.0 / max) % 26 + 65;
            if (p3[i] == 80)
            {
                found3 = true;
                k = 20 - i;
                HP1 = HP1 - p3[i] * k * 3;
                EXP1 = EXP1 + (3500 - p3[i] * k) % 300;
                M1 = M1 - k * E3 * 1.0 / 9;
                break;
            }
        }
        if (!found3)
            M1 = ceil(M1 - 20 * 20 * E3 * 1.0 / 9); // neu ko tìm được hành lý -- tính lại M1

        int min = 1000000007, min_idx = 1;
        for (int i = 0; i < 12; i++)
        {
            p4[i] = (p4[i] + (int)(pow(ceil(E3 * 1.0 / 29), 3))) % 9;

            if (p4[i] < min)
            {
                min = p4[i];
                min_idx = i + 1;
            }
        }
        for (int i = 11; i >= 0; i--)
        {
            p4[i] = ((p4[i] + E3) * (int)ceil(min * 1.0 / min_idx)) % 26 + 65;
            if (p4[i] == 80)
            {
                k = 12 - i;
                HP1 = HP1 - k * 4 * p4[i];
                EXP1 = EXP1 + (4500 - p4[i] * k) % 400;
                M1 = ceil(M1 - k * E3 * 1.0 / 9);
                found4 = true;
                break;
            }
        }
        if (!found4)
            M1 = ceil(M1 - 20 * 20 * E3 * 1.0 / 9);

        if (!found1 && !found2 && !found3 && !found4)
        {
            HP1 = HP1 - (59 * E3) % 900;
            EXP1 = EXP1 - (79 * E3) % 300;
            reset_HP(HP1);
            reset_money(M1);
            reset_exp(EXP1);
            return -1;
        }
        reset_HP(HP1);
        reset_money(M1);
        reset_exp(EXP1);

        return HP1 + EXP1 + M1;
    }

    return -999;
}

////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
