/* (https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/submissions/)

Solution based on simple bfs

Time complexity:- O(N)
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000000];
int level[10001], vis[100000];

void NoOfBridges()
{
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    level[1] = 0;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        for (int j : adj[x])
        {
            if (!vis[j])
            {
                q.push(j);
                level[j] = level[x] + 1;
                vis[j] = 1;
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
        {
            adj[i].clear();
            vis[i] = 0;
        }

        for (int i = 0; i < M; i++)
        {
            cin >> X >> Y;
            adj[X].push_back(Y);
            adj[Y].push_back(X);
        }

        NoOfBridges();
        cout << level[N] << "\n";
    }
}