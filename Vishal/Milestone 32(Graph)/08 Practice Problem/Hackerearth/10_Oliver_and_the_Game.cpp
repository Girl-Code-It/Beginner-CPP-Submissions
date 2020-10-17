// https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/practice-problems/algorithm/oliver-and-the-game-3/

#include <bits/stdc++.h>
using namespace std;

// Use of making graph
vector<vector<int>> v;

// Use for storing entering and exiting time of DFS call of a node.
vector<int> startTime, endTime;
int timer = 0;

void intialize(int n)
{
    v.resize(n);
    startTime.resize(n);
    endTime.resize(n);
}

void dfs(int x)
{
    startTime[x] = ++timer;
    for (int i = 0; i < v[x].size(); ++i)
    {
        if (!startTime[v[x][i]])
        {
            dfs(v[x][i]);
            timer++;
        }
    }
    endTime[x] = ++timer;
}

int main()
{
    int n, m, a, b, c, x, y;
    cin >> n;
    intialize(n+1);
    for (int i = 1; i < n; ++i)
    {
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);
    cin >> m;
    while (m--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 1)
            swap(c, b);
        if (startTime[b] <= startTime[c] && endTime[c] <= endTime[b])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}