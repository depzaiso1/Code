#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fst first
#define sec second
#define mp make_pair

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;

    // append element and its index

    for (int i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.push_back({z, i + 1});
    }

    // sort the vector a
    sort(a.begin(), a.end());
    // set up two pointer: i is the head, j is the tail
    for (int i = 0; i < n; i++)
    {
        cout << a[i].fst;
    }
    ll i = 0, j = n - 1;
    bool found = false;
    while (i < j)
    {
        if (a[i].fst + a[j].fst > x)
            j--;
        else if (a[i].fst + a[j].fst < x)
            i++;
        else if (a[i].fst + a[j].fst == x)
        {
            cout << a[i].sec << ' ' << a[j].sec;
            // return;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "IMPOSSIBLE";

    return 0;
}