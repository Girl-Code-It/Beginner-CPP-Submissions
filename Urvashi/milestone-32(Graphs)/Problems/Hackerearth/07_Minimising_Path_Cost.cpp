#include <bits/stdc++.h>
using namespace std;
#define ll long long

int INF = 1e9;
int dp[103][103];

void floydWarshall(int n, int graph[][104])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i][j] = graph[i][j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dp[i][j] > dp[i][k] + dp[k][j])
                {
                    dp[i][j] = dp[i][k] + dp[k][j];
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
    int graph[104][104];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = INF;
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
        string s1, s2;
        cin >> s1 >> s2;
        cout << dp[mp[s1] - 1][mp[s2] - 1] << endl;
    }

    return 0;
}