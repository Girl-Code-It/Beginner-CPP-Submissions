// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// Explanational will be added later
#include <bits/stdc++.h>
using namespace std;

// Solution : Using DFS
bool isCycleUtil(vector<int> g[], vector<int> visited, int curr)
{
    // If it is already Traversed, means we got a cycle.
    if (visited[curr] == 2)
        return true;

    visited[curr] = 1;
    for (int j = 0; j < g[curr].size(); j++)
    {
        if(visited[g[curr][j]] == 1)
            visited[g[curr][j]] = 2;
        else if (isCycleUtil(g, visited, g[curr][j]))
            return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int n)
{
    vector<int> visited(n);

    for (int i = 0; i < n; i++)
    {
        visited[i] = 1;
        for (int j = 0; j < g[i].size(); j++)
        {
            if (isCycleUtil(g, visited, g[i][j]))
                return true;
        }
        // Backtracking
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