/* (https://www.hackerearth.com/practice/algorithms/graphs/topological-sort/practice-problems/algorithm/oliver-and-the-game-3/description/)

Simple DFS
Time complexity:- O(V+E)
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> v[100001];
int timer;
int startTime[100001], endTime[100001];

void dfs(int x)
{
    timer++;
    startTime[x] = timer;
    for (int i = 0; i < v[x].size(); ++i)
    {
        if (!startTime[v[x][i]])
        {
            dfs(v[x][i]);
            timer++;
        }
    }
    timer++;
    endTime[x] = timer;
}

int main()
{
    int n, m, i, j, k, a, b, c, x, y;
    cin >> n;
    for (i = 1; i < n; ++i)
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