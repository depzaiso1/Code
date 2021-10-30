#include <iostream>
using namespace std;

int main(){
    string s;
    char c;
    cin >> s >> c;
    //cout << s[5];
    int count = 0;
    for(int i = 0; i < 100; i++){
        if(s[i] == c){
            count++;
            //cout<< s[i] << endl;
        }
    }
    cout << count;
    return 0;   
}