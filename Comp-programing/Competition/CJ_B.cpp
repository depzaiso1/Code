#include <bits/stdc++.h>
using namespace std;

int t;

long long a[3][4];
// int m[4] = {0, 0, 0, 0};

long long summ(long long a[], int k)
{
    long long sum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i == k)
            continue;
        else
        {
            sum += a[i];
        }
    }
    return sum;
}
void solve()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    long long m[4] = {0, 0, 0, 0};
    for (int j = 0; j < 4; j++)
    {
        long long min = a[0][j];
        for (int i = 1; i < 3; i++)
        {
            if (a[i][j] <= min)
            {
                min = a[i][j];
                m[j] = min;
            }
        }
    }

    long long sum = summ(m, 4);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << m[i] << endl;
    // }
    // cout << sum << endl;
    if (sum < 1000000)
        cout << " IMPOSSIBLE\n";
    else if (sum == 1000000)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << " " << m[i];
        }
        cout << "\n";
    }
    else
    {
        // long long remain = sum - 1000000;
        for (int i = 0; i < 4; i++)
        {
            if (sum < 1000000)
            {
                m[i] = 1000000 - sum;
                // remain = 0;
                sum = summ(m, 4);
            }
            else
            {
                // remain -= m[i];
                m[i] = 0;
                sum = summ(m, 4);
            }
        }
        for (int i = 0; i < 4; i++)
        {
            cout << " " << m[i];
        }
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
    {

        cout << "Case #" << tc << ":";
        solve();
    }
}