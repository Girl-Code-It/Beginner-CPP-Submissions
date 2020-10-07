/* https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

  BFS Traversal : Time Complexity : O(V + E),  Space Complexity : O(V)
    0 - Unvisited Node
    1 - Visited but not processed Node 
    2 - Processed Node
*/

#include <bits/stdc++.h>
using namespace std;

// Solution : Using DFS Color Coding
bool isCycleUtil(vector<int> g[], vector<int> visited, int curr)
{
    // If it is already Processed, means we got a processed vertex again hence we got a cycle.
    if (visited[curr] == 2)
        return true;

    // Mark Vertex as visited and search cycle in its Adjacency List
    visited[curr] = 1;
    for (int j = 0; j < g[curr].size(); j++)
    {
        // If it is already Visited, then make it processed vertex.
        if(visited[g[curr][j]] == 1)
            visited[g[curr][j]] = 2;
        
        // If it is not visited, then search cycle in its adjacency List.
        else if (isCycleUtil(g, visited, g[curr][j]))
            return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int n)
{
    // Initially mark all vertices as unvisited
    vector<int> visited(n, 0);

    for (int i = 0; i < n; i++)
    {
        // Mark Vertex as visited and search cycle in its Adjacency List
        visited[i] = 1;
        for (int j = 0; j < g[i].size(); j++)
        {
            if (isCycleUtil(g, visited, g[i][j]))
                return true;
        }
        // Backtracking(Cycle is not forming, with ith vertex as its ending and starting point.)
        visited[i] = 0;
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

        // Build Graph
        vector<int> g[vertices];
        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
        }

        cout << isCyclic(g, vertices) << "\n";
    }
    return 0;
}