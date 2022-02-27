#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sumD(ll no)
{
    if (no == 0)
    {
        return 0;
    }

    return (no % 10) + sumD(no / 10);
}
ll func(ll X)
{
    return X - sumD(X);
}

int main()
{
    int T;
    cin >> T;
    ll L, R, s;
    while (T--)
    {
        cin >> L >> R >> s;
        // int cnt = 0;

        if (s > func(R))
        {
            cout << 0 << endl;
        }
        else if (func(L) >= s)
        {
            cout << R - L + 1 << endl;
        }
        else
        {
            ll temp = s - s % 10;
            while (func(temp) < s)
            {
                temp += 10;
            }
            if (R >= temp)
            {
                cout << R - temp + 1 << endl;
            }
            else
                cout << 0 << endl;
        }
    }
}