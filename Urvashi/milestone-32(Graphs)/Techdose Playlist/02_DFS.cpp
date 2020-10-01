#include<bits/stdc++.h>
using namespace std;

void dfs(int start, vector<int> g[], bool *vis)
{
    vis[start] = true;
    cout << start << " ";

    for(int i = 0; i < g[start].size(); i++)
    {
        if(vis[g[start][i]] == false)
        dfs(g[start][i], g, vis);
    }
}

int main()
{
    int t, vertices, edges, u, v;
    cin >> t;
    while(t--)
    {
        cin >> vertices >> edges;

        vector<int> g[vertices];
        bool vis[vertices];

        memset(vis, false, sizeof(vis));

        for(int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0, g, vis);

        cout << endl;
    }
}