#include<bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int> adj[],  bool vis[], int vertices)
{
    queue<int> q;
    q.push(start);
    vis[start] = true;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for(int i = 0; i < adj[curr].size(); i++)
        {
            if(vis[adj[curr][i]] == false)
            {
                q.push(adj[curr][i]);
                vis[adj[curr][i]] = true;
            }
        }
    }
}

int main()
{
    int t, vertices, edges, u, v;
    cin >> t;
    while(t--)
    {
        cin >> vertices >> edges;
        vector<int> adj[vertices];
        bool vis[vertices] = {false};
        for(int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        bfs(0, adj, vis, vertices);
        cout << endl;
    }
}