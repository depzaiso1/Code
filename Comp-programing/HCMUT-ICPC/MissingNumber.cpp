#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
    ll n; cin >> n;
    int a[200000] = {0};
    int temp;
    for(int i = 0; i < n-1; i++){
            cin >> temp;
            a[temp]++;
    }
    for(int i = 1; i < n ; i++){
        if(a[i] == 0) cout << i;
    }


    return 0;
}