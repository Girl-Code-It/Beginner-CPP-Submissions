// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

//. Explanational will be added later
#include <bits/stdc++.h>
using namespace std;

bool isCycleUtil(vector<int> g[], vector<bool> &visited, int curr)
{
    // If it is already Traversed, means we got a cycle.
    if (visited[curr])
        return true;

    visited[curr] = true;
    for (int j = 0; j < g[curr].size(); j++)
    {
        if (isCycleUtil(g, visited, g[curr][j]))
            return true;
    }
    // Backtracking
    visited[curr] = false;
    return false;
}

bool isCyclic(int n, vector<int> g[])
{
    vector<bool> visited(n);

    for (int i = 0; i < n; i++)
    {
        visited[i] = true;
        for (int j = 0; j < g[i].size(); j++)
        {
            if (isCycleUtil(g, visited, g[i][j]))
                return true;
        }
        // Backtracking
        visited[i] = false;
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

        vector<int> g[vertices];

        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
        }

        cout << isCyclic(vertices, g) << "\n";
    }
    return 0;
}