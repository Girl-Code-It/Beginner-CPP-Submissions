// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

/*
 DFS Traversal : Time Complexity : O(V + E),  Space Complexity : O(V)

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> dfs(vector<int> g[], int n)
{
    // This is a Boolean Vector
    vector<bool> visited(n);
    vector<int> result;

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