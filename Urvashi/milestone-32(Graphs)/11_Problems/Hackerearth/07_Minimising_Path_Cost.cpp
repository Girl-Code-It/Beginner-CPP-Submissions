/* (https://www.hackerearth.com/practice/algorithms/graphs/shortest-path-algorithms/practice-problems/algorithm/minimizing-path-cost/)

Floyd Warshalls Algorithm
Time complexity:- O(N^3)
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dist[103][103];

void floydWarshall(int n, int graph[][104])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a = 1;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string S;
        cin >> S;
        mp[S] = a;
        a++;
    }
	int  graph[104][104];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = 1e4;
        }
    }
    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        int x;
        cin >> s1 >> s2 >> x;
        graph[mp[s1] - 1][mp[s2] - 1] = x;
        graph[mp[s2] - 1][mp[s1] - 1] = x;
    }
    floydWarshall(n, graph);
    int q;
    cin >> q;
    while (q--)
    {
        string src, dst;
        cin >> src >> dst;
        cout << dist[mp[src] - 1][mp[dst] - 1] << "\n";
    }
}