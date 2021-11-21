#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include <cstring>
using namespace std;
int main(){
    int break;
    break = 1;
    string str ="Dr Cat Can Code";
    string strClone(str,3,3);
    cout <<strClone;
    return 0;
}