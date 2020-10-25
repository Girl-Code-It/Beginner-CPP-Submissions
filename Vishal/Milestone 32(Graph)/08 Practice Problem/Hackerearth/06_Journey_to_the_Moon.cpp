// https://www.hackerrank.com/challenges/journey-to-the-moon/problem

#include <bits/stdc++.h>
using namespace std;
int Count = 0;

void DFS(int node, vector<vector<int>> &astronaut, vector<int> &visited)
{
    visited[node] = 1;
    for (auto i : astronaut[node])
    {
        if (!visited[i])
        {
            visited[i] = 1;
            DFS(i, astronaut, visited);
        }
    }
    Count++;
}

int main()
{
    int n, p, u, v;
    cin >> n >> p;
    vector<vector<int>> astronaut(n);
    vector<int> visited(n, 0);
    vector<int> countSetSize;

    while (p--)
    {
        cin >> u >> v;
        astronaut[u].push_back(v);
        astronaut[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            Count = 0;
            DFS(i, astronaut, visited);
            countSetSize.push_back(Count);
        }
    }

    long long answer = 0, sum = countSetSize[0];
    for (int i = 1; i < countSetSize.size(); i++)
    {
        answer += sum * countSetSize[i];
        sum += countSetSize[i];
    }
    cout << answer << "\n";
    return 0;
}