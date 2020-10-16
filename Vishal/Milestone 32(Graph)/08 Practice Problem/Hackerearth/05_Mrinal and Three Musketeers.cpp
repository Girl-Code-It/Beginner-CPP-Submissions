/* 
    https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm
    /mrinal-and-three-musketeers-128f4c52/description/
*/

// Time Complexity : O(V + E),  Space Complexity : O(V + E)

#include <bits/stdc++.h>
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
    int n, m, u, v;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}
