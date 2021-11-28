#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;
int solve(int R, int k,int N,deque<int> v){
    int join,temp, cost=0, t=1;
    
    while(t <= k){
        join += v[0];
        temp = v[0];
        //t = 1;
        v.pop_front();
        v.push_back(temp);
        if(join+v[0]>6){
            cost += join;
            join = 0;
            t++;
        }
    }
    return cost;
}


int main(){
    int T;
    cin >> T;
    //int join,temp, cost=0, t=1;
    for(int tc = 1;tc <= T; tc++){
        int R,k,N, input;
        cin >> R >> k >> N;
        deque<int> v(N);
        for(int i = 0;i<N;i++){
            cin >> input;
            v.push_back(input);
        }
        int join=0,temp, cost=0, t=1;
    
        while(t <= R){
            join += v[0];
            temp = v[0];
        //t = 1;
            v.pop_front();
            //v.push_back(temp);
            if(v.size()==0){
                cost = R*N;
                break;
            }
            else if(join+v[0]>k){
                cost += join;
                join = 0;
                t++;
            }
            v.push_back(temp);
    }
       	cout << "Case #" << tc << ": " << cost << "\n";
    }
    return 0;
}