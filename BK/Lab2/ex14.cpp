#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    string str1[100],str2[100],str3[100];
    getline(cin,str1);
    getline(cin,str2);
    getline(cin,str3);

    cout << strcmp(str1,str2) << "\n";
    return 0;
}