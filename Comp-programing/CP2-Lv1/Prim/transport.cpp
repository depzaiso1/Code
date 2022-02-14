#include <bits/stdc++.h>

using namespace std;

const double INF = 1e15;
using Point = pair<int, int>;
#define x first
#define y second
#define sqr(x) (1LL * (x) * (x))

double dist(Point A, Point B)
{
    return sqrt(sqr(A.x - B.x) + sqr(A.y - B.y));
}

void solve()
{
    int n, R;
    cin >> n >> R;
    vector<Point> P(n);
    for (auto &A : P)
        cin >> A.x >> A.y;

    vector<double> d(n, INF);
    vector<bool> visit(n, false);
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> heap;

    heap.push({0, 0});
    d[0] = 0;
    while (heap.size())
    {
        int u = heap.top().second;
        double du = heap.top().first;
        if (du != d[u])
            continue;
        visit[u] = true;
        for (int v = 0; v < n; v++)
            if (!visit[v])
                if (d[v] > dist(P[u], P[v]))
                {
                    d[v] = dist(P[u], P[v]);
                    heap.push({d[v], v});
                }
    }

    int numState = 1;
    double totalRoad = 0, totalRail = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[i] <= R)
            totalRoad += d[i];
        else
        {
            numState++;
            totalRail += d[i];
        }
    }
    cout << numState << ' ' << totalRoad << ' ' << totalRail << '\n';
}
int main()
{
    int testcase;
    cin >> testcase;
    for (int tc = 0; tc < testcase; tc++)
    {

        cout << "Case #" << tc + 1 << ": ";
        solve();
    }
    return 0;
}