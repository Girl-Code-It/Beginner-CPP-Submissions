/* 
    https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm
    /mrinal-and-three-musketeers-128f4c52/description/
    
    Solution : Using DFS

    Here I am using unordered_set to find there is a edge between child and parent of source.
*/

#include <bits/stdc++.h>
using namespace std;

void DFS(int &minSum, int source, unordered_set<int> Graph[], int parent, vector<bool> &visited)
{
    visited[source] = true;
    for (auto child : Graph[source])
    {
        if (!visited[child])
            DFS(minSum, child, Graph, source, visited);

        else if (child != parent)
        {
            // Minus 6 because we dont have to count other two musketeers as its neighbours.
            if (Graph[child].find(parent) != Graph[child].end())
                minSum = min(minSum, (int)(Graph[parent].size() + Graph[child].size() + Graph[source].size() - 6));
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_set<int> Graph[n + 1];
    vector<bool> visited(n + 1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        Graph[a].insert(b);
        Graph[b].insert(a);
    }

    int minSum = (int)1e6;
    for (int i = 1; i < n + 1; i++)
    {
        if (!visited[i])
            DFS(minSum, i, Graph, -1, visited);
    }

    if (minSum == 1e6)
        minSum = -1;

    cout << minSum << "\n";
    return 0;
}