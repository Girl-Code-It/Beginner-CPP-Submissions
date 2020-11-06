/* (https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/successful-marathon-0691ec04/)

Dijkstra Algorithm
Time complexity:- O(ElogV)
*/
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

void DijkstraAlgorithm(vector<int> &dis, vector<vector<pii>> &edges, int src)
{
    priority_queue<pii, vector<pii>, greater<pii>> p;
    p.push({0, src});
    dis[src] = 0;
    while (!p.empty())
    {
        pii top = p.top();
        p.pop();
        if (dis[top.second] < top.first)
        {
            continue;
        }
        for (auto x : edges[top.second])
        {
            if (top.first + x.second < dis[x.first])
            {
                dis[x.first] = top.first + x.second;
                p.push({dis[x.first], x.first});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k, x;
    cin >> n >> m >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < k; i++)
    {
        int var;
        cin >> var;
        a[var - 1] = 1;
    }
    vector<vector<pii>> edges(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, q;
        cin >> u >> v >> q;
        edges[u - 1].push_back({v - 1, q});
        edges[v - 1].push_back({u - 1, q});
    }
    int src, des;
    cin >> src >> des;
    //src friend
    //des native
    src--;
    des--;
    vector<int> sdis(n, INT_MAX);
    vector<int> ddis(n, INT_MAX);
    //dijkistra
    DijkstraAlgorithm(sdis, edges, src);
    DijkstraAlgorithm(ddis, edges, des);
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            if (ddis[i] < x && sdis[i] != INT_MAX)
            {
                ans = min(ans, sdis[i] + ddis[i]);
            }
        }
    }
    if (ans != INT_MAX)
        cout << ans << "\n";
    else
        cout << -1 << "\n";
}