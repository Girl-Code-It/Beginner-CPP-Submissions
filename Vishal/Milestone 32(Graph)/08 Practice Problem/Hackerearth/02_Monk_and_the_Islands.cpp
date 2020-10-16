// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
int dist[10001], visted[100000];

void BFS()
{
    queue<int> q;
    q.push(1);
    visted[1] = 1;
    dist[1] = 0;

    // BFS 
    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int child : adj[current])
        {
            if (!visted[child])
            {
                q.push(child);
                dist[child] = dist[current] + 1;
                visted[child] = 1;
            }
        }
    }
}
int main()
{
    int t, N, M, X, Y;
    cin >> t;

    while (t--)
    {

        cin >> N >> M;
        
        for (int i = 1; i <= N; i++)
            adj[i].clear(), visted[i] = 0;

        for (int i = 0; i < M; i++)
        {
            cin >> X >> Y;
            adj[X].push_back(Y);
            adj[Y].push_back(X);
        }

        BFS();
        cout << dist[N] << endl;
    }
}