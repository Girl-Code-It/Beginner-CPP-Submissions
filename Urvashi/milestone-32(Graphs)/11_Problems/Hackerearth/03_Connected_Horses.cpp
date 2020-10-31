/* (https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/connected-horses-10/submissions/)

Time complexity:- O(N*N)

DFS/BFS + DP + Mathematics.
*/
#include <bits/stdc++.h>
using namespace std;
long long n, m, x, y, q, t, sum, mod = 1e9 + 7, ans;

bool vis[1001][1001];
bool arr[1001][1001];
long long factorial[1000001];

int dirc[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

void fact()
{
    factorial[0] = 1;
    for (long long i = 1; i <= 1e6; i++)
        factorial[i] = (factorial[i - 1] * i) % mod;
}

void dfs(int a, int b)
{
    vis[a][b] = true;
    sum++;
    for (int i = 0; i < 8; i++)
    {
        int dx = a + dirc[i][0];
        int dy = b + dirc[i][1];

        if (dx <= 0 || dx > n || dy <= 0 || dy > m || vis[dx][dy] || !arr[dx][dy])
            continue;
        dfs(dx, dy);
    }
}

int main()
{
    fact();
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> q;
        ans = 1;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                vis[i][j] = false;
                arr[i][j] = false;
            }
        }

        for (int i = 0; i < q; i++)
        {
            cin >> x >> y;
            arr[x][y] = true;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (!vis[i][j] && arr[i][j])
                {
                    sum = 0;
                    dfs(i, j);
                    ans = (ans * factorial[sum]) % mod;
                }
            }
        }
        cout << ans << "\n";
    }
}