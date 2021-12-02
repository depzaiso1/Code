#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int Count_repetition(string s){
    int i,j,count = 1,max = 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i-1]){
            count += 1;
            if(count >= max){
                max = count;
            }
        }
        else count = 1;
    }
    return max;
}       

int main(){
    int rel;
    string str;
    getline(cin,str);
    rel = Count_repetition(str);
    cout << rel;
    return 0;

}