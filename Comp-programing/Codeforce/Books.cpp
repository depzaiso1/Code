#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> n >> t;
    int book[n];
    for (int i = 0; i < n; i++)
    {
        cin >> book[i];
    }
    int res = 0, left = 0, right = 0, cur = 0;
    // Two pointer
    while (left < n && right < n)
    {
        while (right < n)
        {
            cur += book[right++];
            if (cur > t)
            {
                cur -= book[--right];
                // res = right - left + 1;
                break;
            }
        }
        res = max(res, right - left);
        cur -= book[left++];
    }
    cout << res;
    return 0;
}