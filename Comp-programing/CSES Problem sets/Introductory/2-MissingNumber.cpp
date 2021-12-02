#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, sum, a;
    cin >> n;
    for(int i = 1; i<n+1;i++){
        sum += i;
    }
    for(int i = 0; i<n-1;i++){
        cin >> a;
        sum -= a;
    }
    cout << sum;
    return 0;
}