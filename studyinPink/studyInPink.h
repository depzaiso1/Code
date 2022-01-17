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

#define interval(x,a,b) if(x>=a && x<=b)
using namespace std;

////////////////////////////////////////////////////////////////////////
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////
void reset_exp(int& EXP1, int& EXP2){
    if(EXP2 > 900) EXP2 = 900;// Nếu vượt quá 900, trả về 900w
    if(EXP1 > 900) EXP1 = 900;
}
int firstMeet(int& EXP1, int& EXP2, const int& E1){
    //Complete this function to gain point on task 1
    interval(E1,0,399){
        if(E1 >= 0 && E1 <= 49) EXP2 += 25;
        if (E1>=50 && E1 <= 99) EXP2 += 50;
        if(E1 >= 100 && E1 <= 149) EXP2 += 85;
        if(E1 >= 150 && E1 <= 199) EXP2 += 75;
        if(E1 >= 200 && E1 <= 249) EXP2 += 110;
        if(E1 >= 250 && E1 <= 299) EXP2 += 135;
        if(E1 >= 300 && E1 <= 399) EXP2 += 160;

        if(E1 % 2 == 0) EXP1 += E1/10; //Afghanistan
        else EXP1 -= E1/5;//Iraq

        
        return EXP1 + EXP2;
    }
    interval(E1,400,999){
        interval(E1,400,499) EXP2 = ceil(EXP2 + (E1/7+9));//thong tin 1
        interval(E1,500,599) EXP2 = ceil(EXP2 + (E1/9+11));// thong tin 2
        interval(E1,600,699) EXP2 = ceil(EXP2 + (E1/5+6));// thong tin 3
        interval(E1, 700, 799){// thong tin 4
            EXP2 = ceil(EXP2 + (E1/7+9));// giai thich thong tin 1
            if(EXP2 > 200){// neu lon hon 200 thi giai thich thong tin 2
                EXP2 = ceil(EXP2 + (E1/9+11));
            }
            // neu < 200 thi ko giai thich
        }
        interval(E1, 800, 999) {// thong tin 5 __ Giai thich ca 2 thong tin 1&2, update EXP Watson
            EXP2 = EXP2 + (E1/7+9) + (E1/9+11);
            if(EXP2 > 600){// neu lon hon 600 giai thich thong tin 3
                EXP2 = ceil(EXP2 +(E1/5+6));
                EXP2 = ceil(EXP2*1.15);
                //GIAI THICH CA 3 THONG TIN --> WATSON cong them 15%
            }
        }
        EXP1 = ceil(EXP1 - 0.1*E1);//Sau khi giải thích, Kinh nghiệm sherlock giảm đi 10%
        
        return EXP2 + EXP1;
    }
    return -1;
}

int investigateScene(int& EXP1, int& EXP2, int& HP2, int& M2, const int& E2){
    //Complete this function to gain point on task 2
    // Giai đoạn 1
    interval(E2,0,999){
        interval(E2, 0, 299){
            EXP2 = ceil(EXP2 + (E2/9+10));
            EXP1 = ceil(EXP1 + (E2/9+10)/3);
        }
        interval(E2, 300, 499){
            EXP2 = ceil(EXP2 + (0.35*E2));
            EXP1 = ceil(EXP1 + (0.35*E2)/3);
        }
        interval(E2, 500, 999){
            EXP2 = ceil(EXP2 + 0.17*E2);
            EXP1 = ceil(EXP1 + (0.17*E2)/3);
        }

        //bat dau giai doan 2
        //Watson chạy và giảm HP
        HP2 = ceil(HP2 - (int)((E2*E2*E2)/pow(2,23)));

        if(E2 % 2 == 0) M2 = ceil(M2 + (E2*E2)/50);
        reset_exp(EXP1, EXP2);
        return EXP2 + HP2 + M2 + EXP1;
    }
    else return -1;
}

int traceLuggage(int& HP1, int& EXP1, int& M1, const int& E3){
    //Complete this function to gain point on task 3
    return -1;
}

////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
