#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

struct marble{
    int box;
    int ball;
};

bool compare(const marble& x, const marble& y){
    if(x.ball != y.ball) return x.ball > y.ball;
    return x.box >= y.box;
}

int main()
{
    int n, need,m;
    int in1,in2;
    cin >> n >> m;
    vector<marble> a;

    for(int i = 0; i < m; i++){
        cin >> in1 >>in2;
        a.push_back(marble({in1,in2}));
        
    }
    sort(a.begin(), a.end(), compare);

    int buy = 0;
    need = n;
    for(int i = 0; i < n ; i++){
        if(a[i].box <= need){
            buy += (a[i].box)*(a[i].ball);
            need -= a[i].box;
        }
        else if(need < a[i].box){
            buy += need*a[i].ball;
            break;
        }
    }
    cout << buy << "\n";
    return 0;
}
