#include <bits/stdc++.h>
using namespace std;

int T; //[1;100]
long long N;
const int MAXN = 100001;
long long S[MAXN];

void solve()
{

    sort(S, S + N);

    long long cnt = 0;
    for (int i = 0; i < N; i++)
    {
        if (cnt + 1 > S[i])
            continue;
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> S[i];
        }

        cout << "Case #" << tc << ": ";

        solve();
    }
    return 0;
}