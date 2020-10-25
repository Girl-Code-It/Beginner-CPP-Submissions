#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 1;

typedef pair<int, int> pii;
int n, m;
vector<pii> adj[mx];

void dijkstra(int source, vector<int> &dist)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> vis(n + 1);

    pq.push({0, source});
    dist[source] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if (vis[u])
            continue;

        vis[u] = true;
        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;

            if ((dist[v] > dist[u] + weight))
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int a, u, v, l, s, d, k, x;
    cin >> n >> m >> k >> x;
    vector<int> city;

    for (int i = 0; i < k; i++)
    {
        cin >> a;
        city.push_back(a);
    }
    while (m--)
    {
        cin >> u >> v >> l;
        adj[u].push_back(make_pair(v, l));
        adj[v].push_back(make_pair(u, l));
    }

    cin >> s >> d;
    vector<int> dist1[n + 1, INT_MAX), dist2(n + 1, INT_MAX);
    
    dijkstra(s, dist1);
    dijkstra(d, dist2);

    int ans = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        if (dist2[city[i]] < x && dist1[city[i]] != INT_MAX)
        {
            ans = min(ans, dist2[city[i]] + dist1[city[i]]);
        }
    }

    if (ans == INT_MAX)
        cout << "-1" << endl;
    else
        cout << ans << endl;

    return 0;
}