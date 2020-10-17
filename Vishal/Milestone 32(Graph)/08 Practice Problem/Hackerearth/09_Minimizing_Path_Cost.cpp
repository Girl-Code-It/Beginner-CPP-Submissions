// https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/minimizing-path-cost/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;

    map<string, int> mp;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        mp[s1] = i;
    }

    vector<vector<int>> graph(n, vector<int>(n, (int)1e4));
    while (m--)
    {
        cin >> s1 >> s2 >> x;
        graph[mp[s1]][mp[s2]] = x;
        graph[mp[s2]][mp[s1]] = x;
    }

    // Floyd Warshall algorithm
    vector<vector<int>> dist(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dist[i][j] = graph[i][j];

    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];

    int q;
    cin >> q;
    while (q--)
    {
        string src, dst;
        cin >> src >> dst;
        cout << dist[mp[src]][mp[dst]] << "\n";
    }
}