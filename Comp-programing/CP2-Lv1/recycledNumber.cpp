#include <bits/stdc++.h>
using namespace std;
//typedef long long ll;

int solve(int A,int B){
    int power = 1, temp = A;
    while(temp >= 10){
        power *= 10;
        temp /= 10;
    }
    int rel = 0;
    for(int n = A; n <= B;n++){
        int m = n;
        while (true){
            m = (m/10) + ((m%10)*(power));
            if (m==n) break;
            else if (m>n && m <= B) rel += 1;
        }
    }
    return rel;
}

int main(){
    int T;

    cin >> T;
    //int c[T];
    for(int tc = 1;tc <= T; tc++){
        int a,b;
        cin >> a >> b;
       	cout << "Case #" << tc << ": " << solve(a,b) << "\n";
    }
    return 0;
}