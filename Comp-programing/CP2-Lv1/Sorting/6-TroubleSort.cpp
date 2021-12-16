#include <bits/stdc++.h>
#include <algorithm>

#define MAXN 100000
#define REP(i,a,b) for(int i = a; i < b ; i++)
using namespace std;

int v0[(MAXN + 1) / 2], v1[MAXN / 2];

int& get(int i) {
  return ((i % 2 != 0)? v1 : v0)[i / 2];
}

int main() {
  int t; 
  cin >> t;

  for(int tc = 1; tc <= t; tc++) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      cin >> get(i);
    }
    sort(v0, v0 + (n + 1) / 2);
    sort(v1, v1 + n / 2);
    cout << '\n';
    int err = -1;
    for(int i = 1; i < n; i++) {
      if(get(i - 1) > get(i)) { err = i - 1; break; }
    }
    cout << "Case #" << tc << ": ";

    if(err == -1) 
      cout << "OK" << "\n";
    else cout << err <<"\n";
  }
  return 0;
}