// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/connected-horses-10/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long board[1003][1003];
long visited[1003][1003];
long factorial[1000002];
long dir[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

long BFS(long a, long b, long N, long M)
{
    visited[a][b] = 1;

    long count = 1;
    queue<pair<long, long>> q;
    q.push(make_pair(a, b));

    while (!q.empty())
    {
        a = q.front().first;
        b = q.front().second;
        q.pop();

        for (long i = 0; i < 8; i++)
        {
            long x = a + dir[i][0];
            long y = b + dir[i][1];

            if (x <= 0 || x > N || y <= 0 || y > M)
                continue;

            if (board[x][y] == 1 and !visited[x][y])
            {
                count++;
                q.push(make_pair(x, y));
                visited[x][y] = 1;
            }
        }
    }
    return count;
}

int main()
{
    long t, N, M, Q;
    cin >> t;

    // Multiplication Factor
    factorial[0] = 1;
    for (long i = 1; i <= 1000000; i++)
        factorial[i] = (i * factorial[i - 1]) % mod;

    while (t--)
    {
        cin >> N >> M >> Q;

        // Initialize
        for (long i = 0; i <= N; i++)
            for (long j = 0; j <= M; j++)
                board[i][j] = 0, visited[i][j] = 0;

        long x, y;
        while (Q--)
        {
            cin >> x >> y;
            board[x][y] = 1;
        }

        long ans = 1;
        for (long i = 1; i <= N; i++)
        {
            for (long j = 1; j <= M; j++)
            {
                if (board[i][j] == 1 && !visited[i][j])
                {
                    long c = BFS(i, j, N, M);
                    ans = (ans * factorial[c]) % mod;
                }
            }
        }

        cout << ans % mod << "\n";
    }

    return 0;
}