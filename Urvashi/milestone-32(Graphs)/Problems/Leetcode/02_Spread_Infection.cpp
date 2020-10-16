// https://www.pepcoding.com/resources/online-java-foundation/graphs/infection-spread-official/ojquestion

// Using BFS, It is purely bfs problem.
#include <bits/stdc++.h>
using namespace std;

int spreadInfection(vector<int> adj[], int n, int src, int time)
{
    // This is boolean Vector to check whether a vertex is visited or not ?
    vector<bool> visited(n);
    int count = 0;

    // This store visited vertex
    queue<pair<int, int>> q;
    q.push({src, 1});

    while (!q.empty())
    {
        auto node = q.front();
        q.pop();

        int x = node.first;
        if (visited[x])
           continue;

        visited[x] = true;
        if (node.second > time)
            break;

        count++;

        // Adding givem vertex into result vector & pushing its adjacent vertices on queue.
        for (auto i : adj[x])
        {
            if (!visited[adj[x][i]])
                q.push({adj[x][i], node.second + 1});
        }
    }
    return count;
}

int main()
{
    int vertices, edges, u, v, w, src, time;
    cin >> vertices >> edges;

    // For this question there is no need of weight, we will ignore it
    vector<int> adj[vertices];

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin >> src >> time;
    cout << spreadInfection(adj, vertices, src, time);
    return 0;
}