/* (https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/mrinal-and-three-musketeers-128f4c52/description/)

Simple DFS

Time complexity:- O(N)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> adj[4002];
ll edge[4002][4002], ans = INT_MAX, n, m, x, y, tempAns;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        edge[x][y] = edge[y][x] = 1;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j : adj[i])
        {
            for (ll k : adj[j])
            {
                if (edge[i][k] && i != j && j != k && k != i)
                {
                    ll tempAns = adj[i].size() + adj[j].size() + adj[k].size() - 6;
                    ans = min(ans, tempAns);
                }
            }
        }
    }
    cout << ans;
}