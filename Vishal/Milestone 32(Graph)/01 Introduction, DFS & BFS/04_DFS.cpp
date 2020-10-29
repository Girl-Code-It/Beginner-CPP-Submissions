// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

/*
 DFS Traversal : Time Complexity : O(V + E),  Space Complexity : O(V)

*/

#include <bits/stdc++.h>
using namespace std;

// Solution 1: Using Stack
vector<int> dfs(vector<int> g[], int n)
{
    // This is a Boolean Vector
    vector<bool> visited(n);
    vector<int> result;

    // This is stack which store visited vertices.
    stack<int> st;
    st.push(0);

    while (!st.empty())
    {
        int x = st.top();
        st.pop();

        if (!visited[x])
        {
            
            result.push_back(x);
            visited[x] = true;

            for (int i = g[x].size() - 1; i >= 0; i++)
            {
                if (!visited[g[x][i]])
                    st.push(g[x][i]);
            }
        }
    }

    return result;
}

// Solution 2: Recursion
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

    while (t--)
    {
        cin >> vertices >> edges;

        vector<int> g[vertices];

        for (int i = 0; i < edges; i++)
        {
            cin >> u >> v;

            // Bidirectional Graph(Undirected)
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<int> res = dfs(g, vertices);
        for (auto i : res)
            cout << res[i] << " ";

        cout << "\n";
    }
    return 0;
}