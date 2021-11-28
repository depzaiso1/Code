#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n,input;
    cin >> n;
    
    deque<int> pos,neg;
    for(int i = 0; i < n;i++){
        cin >> input;
        if(input >= 0){
            pos.push_back(input);
        }
        if(input < 0){
            neg.push_back(input);
        }
    }
    int result = 1;
    sort(pos.rbegin(), pos.rend());
    sort(neg.begin(),neg.end());
    
    /*for(int i = 0; i < n; i++){
        if(neg.size() >= 2){
            if(pos[i]> 0 - neg[i] && ){
                result *= pos[i];
                pos.pop_front();
            }
            else {
                result *= neg[i];
                neg.pop_front();
            }
        }
    }*/
    if(0- neg[0] > pos[0] && 0-neg[1]> pos[0]){
        result = result * neg[0] * neg[1] * pos[0];
    }
    else for(int i = 0; i < 3; i++){
        result *= pos[i];
    }
    cout << result << '\n';
    return 0;

}