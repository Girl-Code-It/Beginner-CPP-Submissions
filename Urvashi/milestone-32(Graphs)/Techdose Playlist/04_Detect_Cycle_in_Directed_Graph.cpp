/* https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

 BFS Traversal : Time Complexity : O(V + E),  Space Complexity : O(V)

 */

#include <bits/stdc++.h>
using namespace std;

bool isCyclicUtil(vector<int> adj[], vector<bool> vis, int curr)
{
    if (vis[curr] == true)
        return true;

    vis[curr] = true;
    bool flag = false;

    for (int i = 0; i < adj[curr].size(); i++)
    {
        flag = isCyclicUtil(adj, vis, adj[curr][i]);
        if (flag == true)
            return true;
    }
    return false;
}

bool isCyclic(int vertices, vector<int> adj[])
{
    vector<bool> vis(vertices, false);
    bool flag = false;
    for (int i = 0; i < vertices; i++)
    {
        vis[i] = true;
        for (int j = 0; j < adj[i].size(); j++)
        {
            flag = isCyclicUtil(adj, vis, adj[i][j]);
            if (flag == true)
                return true;
        }
        vis[i] = false;
    }
    return false;
}

int main()
{
    int t, vertices, edges, u, v;
    cin >> t;
    while (t--)
    {
        cin >> vertices >> edges;
        vector<int> adj[vertices];
        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        cout << isCyclic(v, adj) << endl;
    }
}