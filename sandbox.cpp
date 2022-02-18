#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sumOfDigitsFrom1ToNUtil(ll n, ll a[])
{
    if (n < 10)
        return (n * (n + 1) / 2);

    ll d = (ll)(log10(n));
    ll p = (ll)(ceil(pow(10, d)));
    ll msd = n / p;

    return (msd * a[d] + (msd * (msd - 1) / 2) * p + msd * (1 + n % p) + sumOfDigitsFrom1ToNUtil(n % p, a));
}

ll sumOfDigitsFrom1ToN(ll n)
{
    ll d = (ll)(log10(n));
    ll a[d + 1];
    a[0] = 0;
    a[1] = 45;

    for (ll i = 2; i <= d; i++)
        a[i] = a[i - 1] * 10 + 45 * (ll)(ceil(pow(10, i - 1)));

    return sumOfDigitsFrom1ToNUtil(n, a);
}

// Driver code
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long m, n, ans = 0;
        cin >> m >> n;
        if (m == 0)
        {
            ans = sumOfDigitsFrom1ToN(n);
        }
        else if (m == n)
        {
            ans = sumOfDigitsFrom1ToN(n) - sumOfDigitsFrom1ToN(n - 1);
        }
        else
        {
            ans = sumOfDigitsFrom1ToN(n) - sumOfDigitsFrom1ToN(m - 1);
        }
        cout << ans << endl;
    }
}