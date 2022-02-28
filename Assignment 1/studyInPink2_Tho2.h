/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2022
* Author: Vu Van Tien
* Date: 10.02.2022
*/

//The library here is concretely set, students are not allowed to include any other libraries.
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
///STUDENT'S ANSWER BEGINS HERE
///Complete the following functions
///DO NOT modify any parameters in the functions.
////////////////////////////////////////////////////////////////////////

string notebook1(string ntb1) {
    ifstream inputfile;
    inputfile.open(ntb1);
    string s;
    inputfile>>s;
    string num = s.substr(11,3);
    for(char x: num){
        if(x <=48 && x >=57)  return "000000000";
    }
    int n1 = stoi(num);
    int s0=0;
    int s1=0;
    int s2=0;
    int s3=0;
    int s4=0;
    int s5=0;
    int s6=0;
    int s7=0;
    int s8=0;
    int s9=0;
    int z=0;
    while(n1--){
        int a;
        inputfile>>a;
        if(a==0)    s0 ++;
        if(a==1)    s1 ++;
        if(a==2)    s2 ++;
        if(a==3)    s3 ++;
        if(a==4)    s4 ++;
        if(a==5)    s5 ++;
        if(a==6)    s6 ++;
        if(a==7)    s7 ++;
        if(a==8)    s8 ++;
        if(a==9)    s9 ++;
        z++;
    }
    string res0,res1,res2,res3,res4,res5,res6,res7,res8,res9;
    res0=to_string(s0%10);
    res1=to_string(s1%10);
    res2=to_string(s2%10);
    res3=to_string(s3%10);
    res4=to_string(s4%10);
    res5=to_string(s5%10);
    res6=to_string(s6%10);
    res7=to_string(s7%10);
    res8=to_string(s8%10);
    res9=to_string(s9%10);
    string res = res0 + res1 + res2 + res3 + res4 + res5 + res6 + res7 + res8 + res9;
    inputfile.close();
    return res;
}

string notebook2(string ntb2) {
    ifstream inputfile;
    inputfile.open(ntb2);
    string number;
    inputfile>>number;
    for(char x:number){
        if(x<=48 && x>=57)  return "1111111111";
    }
    int n = stoi(number);
    if(n<5)    return "1111111111";
    
    int count =0;
    int viTri;
    for(int i=0;i<n+1;i++){
        string s;
        getline(inputfile,s);
        viTri=0;
        while(true)
        {
            int a= s.find("Pink",viTri);
            if(a<0) break;
            count++;
            viTri=a+1;
        }
        viTri=0;
        while(true)
        {
            int a= s.find("pink",viTri);
            if(a<0) break;
            count++;
            viTri=a+1;
        }
    }
    count = pow(count,2);
    string res = to_string(count);
    string them9 = "9";
    for(int i=res.length();i<10;i++){
        res = res + them9;
    }
    inputfile.close();
    return res;
}
bool isprime(int n){
    if(n < 2){
        return false;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    
    if(count == 0)      return true;
    else return false;
}
int fibonaci(int n)
{
    int f0 = 1;
    int f1 = 1;
    int f, i;
    if(n < 0)
        return -1; 
    if(n < 2)
        return 1;
    i = 1;
    while(i < n)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
        i++;
    }
    return f;
}
bool checkfibo(int value)
{
    int i = 0;
    while(value > fibonaci(i))
    {
        ++i;
    }
    if(value == fibonaci(i))
        return true;
    return false;
}
string notebook3(string ntb3) {
    ifstream inputfile;
    inputfile.open(ntb3);
    int array2D[10][10];
    for(int i=0;i<10;i++){
        char a;
        char temp ='|';
        for(int j=0;j<9;j++){
            inputfile >> a >> temp;
            array2D[i][j] = a-48;
        }
        char b;
        inputfile >> b;
        array2D[i][9] = b-48;
    }
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            while(!isprime(array2D[i][j]))       array2D[i][j]++;
        }
    }
    for(int i=1;i<10;i++){
        for(int j=0;j<i;j++){
            while(!checkfibo(array2D[i][j]))    array2D[i][j]++;
        }
    }
    for(int i=0;i<10;i++){
        int pos,x;
        for(int j=8;j<10;j++){
            x = array2D[i][j];
            pos = j;
            while(pos>0 && x <= array2D[i][pos-1]){
                array2D[i][pos]=array2D[i][pos-1];
                pos--;
            }
            array2D[i][pos]=x;
        }
    }
    string res = "0000000000";
    for(int i=0;i<10;i++){
        int max = array2D[i][0];
        int vitri=0;
        for(int j=0;j<10;j++){
            if(max <= array2D[i][j]){
                max=array2D[i][j];
                vitri=j;
            }
        res[i] += vitri+48;
        }  
    }
    inputfile.close();
    return res;
}
void reverseStr(string& str){
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string g(string p1, string p2){
    string chuoiXuatRa="0000000000";
    int num, du=0;
    for(int i=0;i<10;i++)
    {
        num=p1[i]-48+p2[i]-48+du;
        if(num>9)
        {
            num-=10;
            du=1;
        }
        else du=0;
        chuoiXuatRa[i]=num+48;
    }
    return chuoiXuatRa;
}

string generateListPasswords(string pwd1, string pwd2, string pwd3) {
    // Complete this function to gain point
    return pwd1+","+pwd2+","+pwd3+","+g(pwd1,pwd2)+","+g(pwd1,pwd3)+","+g(pwd2,pwd3)+","+g(g(pwd1,pwd2),pwd3)+","+g(pwd1,g(pwd2,pwd3))+","+g(g(pwd1,pwd2),g(pwd1,pwd3));
}

bool chaseTaxi(
    int arr[100][100],
    string points,
    string moves,
    string & outTimes,
    string & outCatchUps
) {
    // Complete this function to gain point

    int v=0, quantity=0;
    while(true){
        int s = points.find("(",v);
        if(s<0)     break;
        v++;
        quantity ++;
    }
    int a[quantity];
    int b[quantity];
    int len = points.length();
    int j=0;
    int k=0;
    for(int i=0; i < len ; i++){
        if(points[i]=='('){
            a[j++] = points[i+1] - 48;
        }
        if(points[i]==','){
            b[k++] = points[i+1] - 48;
        }
        int n = moves.length();
        int x=0;
        int y=0;
        arr[0][0] = -9;
        for(int i=0;i<n;i++){
            switch (moves[i])
            {
            case 'U':
                if(y!=0)    y++;
                else continue;     
                break;
            case 'D':
                if(y!=0)    y--;
                else continue;
                break;
            case 'R':
                if(x!=0)    x++;
                else continue;
                break;
            case 'L':
                if(x!=0)    x--;
                else continue;
                break;
            }
            arr[y][x] = -9;    
        }
    }
    for(int i=0;i<quantity-1;i++){
        outTimes[i] = 14*(abs(a[i+1] - a[i])+abs(b[i+1]-b[i]));
    }

    return false;
}
string enterLaptop(string tag, string message) {
    ifstream inputfile;
    inputfile.open(tag);
    string mail;
    int number;
    string a = "Email: ";
    string b = "Address: ";
    string s = " THT Street";
    inputfile >> a >> mail; 
    inputfile >> b >> number >> s;
    string result = mail + ";";
    if(number == 0 )       return result;
    for(int i=0;i<number;i++){
        result += message;
    }
    inputfile.close();
    return result;

}

////////////////////////////////////////////////
///END OF STUDENT'S ANSWER
////////////////////////////////////////////////
#endif /* studyInPink_h */
