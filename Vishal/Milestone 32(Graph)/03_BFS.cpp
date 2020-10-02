// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

/*
 BFS Traversal : Time Complexity : O(V + E),  Space Complexity : O(V)

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> g[], int n)
{
    vector<bool>visited(n);
    vector<int>result;

    queue<int> q;
    q.push(0);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        result.push_back(x);
        for (auto i : g[x])
        {
            if(!visited[g[x][i]])
            {
                visited[g[x][i]] = true;
                q.push(g[x][i]);
            }
        }
        
    }
    return result;
}

int main()
{
    int t, vertices, edges, u, v;
    cin >> t;

    while (t--)
    {
        cin >> vertices >> edges;

        vector<int> g[vertices];

        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;

            // directional Graph(directed)
            g[u].push_back(v);
        }

        vector<int> res = bfs(g, vertices);
        for (auto i : res)
            cout << res[i] << " ";

        cout << "\n";
    }
    return 0;
}