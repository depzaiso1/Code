#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    vector<vector<int>> cnt(2, vector<int>(256, 0));
    for (char c : s)
    {
        cnt[0][c]++;
    }
    for (char c : t)
    {
        cnt[1][c]++;
    }
    int ans = 0;
    for (int i = 0; i < 256; i++)
    {
        ans += abs(cnt[0][i] - cnt[1][i]);
    }

    cout << ans << '\n';
    return 0;
}