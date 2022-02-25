#include <bits/stdc++.h>
using namespace std;

int sumDigits(int no)
    {
        if(no == 0){
          return 0 ;
        }
       
        return (no % 10) + sumDigits(no / 10) ;
    }
int main(){

}