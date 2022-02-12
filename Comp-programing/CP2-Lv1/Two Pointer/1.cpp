#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int i = -1, j = -1;
    
    int n,m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n+m);
    for(auto &x : a){
        cin >> x;
    }
    for(auto &x : b){
        cin >> x;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while(i<=n || j <= m){
        if(j == m+1 || (i <= n+1 && a[i] <= b[j])){
            c.push_back(a[i++]);
        }   
        else{
            c.push_back(b[j++]);
        }
    }
    cout << '\n';
    for(auto it : a){
        cout << it <<" ";
    }
    cout << '\n';
    for(auto it : b){
        cout << it << " ";
    }
    cout << '\n';
    for(auto it : c)
        cout << it << " ";
    return 0;
}