#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

struct Contestant{
    int id;
    int score;
    int time;
};

bool compare(const Contestant& x, const Contestant& y){
    if (x.score != y.score) return x.score > y.score;
    return x.time < y.time;
}

int main(){
    int n,m;
    cin >> n;
    int a,b,c;
    vector<Contestant> contestant;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        contestant.push_back(Contestant({a,b,c}));

    }
    //contestant.push_back(Contestant({1,100,1250}));
    sort(contestant.begin(),contestant.end(),compare);

    for(Contestant& x : contestant){
        cout << x.id << " " << x.score << " " << x.time << "\n";
    }
    return 0;
}