#include <bits/stdc++.h>
using namespace std;

string a[51];
int T, N ,K;
long long V;

int main(){
    cin >> T;
    for(int tc = 1; tc <= T; tc++){
        cin >> N >> K >> V;
        for(int i = 1; i <= N; i++){
            cin >> a[i];

        }
        int start = ((V-1)*K + 1)%N;
        if(start == 0)
            start = N;
        vector<int> ans;
        for(int i = 0; i < K; i++){
            int id =(start + i) % N;
            ans.push_back(id);
        }
        sort(ans.begin(), ans.end());
        cout << "Case #" << tc << ": ";
        for(int id: ans){
            cout << ans[id] << "\n";
        }
    }
    return 0;
}