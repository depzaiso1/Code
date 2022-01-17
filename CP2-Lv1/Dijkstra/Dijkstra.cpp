#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
 
vector<pair<int, int>> Edges[100005];
long long visit[100005];
long long L[100005];
int pre[100005];
int wei[100005];
int ans[100005];
int ansL;
 
class pkt {
public:
	long long l;
	int w, a, b;
	bool operator<(const pkt& k) const{
		return l > k.l;
	}
};
 
priority_queue<pkt>Q;
 
void dijkstra(int s) {
	pkt p, q;
	p.l = 0;
	p.w = 0;
	p.a = 0;
	p.b = s;
 
	Q.push(p);
	while (!Q.empty()) {
		p = Q.top();
		Q.pop();
		if (visit [p.b]) continue;
		visit[p.b] = true;
		L[p.b] = p.l;
		pre[p.b] = p.a;
		wei[p.b] = p.w;
		for (int i = 0; i < Edges[p.b].size(); i++) {
			q.l = L[p.b] + Edges[p.b][i].second;
			q.w = Edges[p.b][i].second;
			q.a = p.b;
			q.b = Edges[p.b][i].first;
			Q.push(q);
		}
	}
}
 
int main()
{
	int n, m, r, s, w;
	int i, j;
	pkt p, q;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++) {
		scanf("%d %d %d", &r, &s, &w);
		Edges[r].push_back(make_pair(s, w));
		Edges[s].push_back(make_pair(r, w));
	}
 
	for (i = 1; i <= n; i++) L[i] = (int)1E12;
	dijkstra(1);
	if (L[n] == (int)1E12) { printf("-1\n"); return 0; }
	i = 1;
	ans[1] = n;
	while (ans[i] != 1)
	{
		i++;
		ans[i] = pre[ans[i - 1]];
	}
	while (i > 1) {
		printf("%d ", ans[i]);
		i--;
	}
 
	printf("%d\n", ans[1]);
 
	return 0;
}