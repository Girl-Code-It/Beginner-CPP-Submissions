// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/we-are-on-fire/

#include <bits/stdc++.h>
using namespace std;
int mat[1001][1001];
int n, m;

vector<pair<int, int>> v = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

bool isvalid(int a, int b)
{
    return (a >= 1 && a <= n && b >= 1 && b <= m && mat[X][Y] == 1);
}

int bfs(int x, int y, int count)
{
    // Mark as Ocean (Dead)
    mat[x][y] = 0;

    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while (!q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;

        q.pop();

        for (int i = 0; i < v.size(); i++)
        {
            int X = xx + v[i].first;
            int Y = yy + v[i].second;

            // Mark as Ocean (Dead)
            if (isvalid(X, Y))
            {
                q.push(make_pair(X, Y));
                mat[X][Y] = 0;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int q, ans = 0;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
                ans++;
        }
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (mat[x][y] == 1)
            ans -= bfs(x, y, 1);

        cout << ans << '\n';
    }
}