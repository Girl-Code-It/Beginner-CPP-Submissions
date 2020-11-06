/* (https://www.hackerrank.com/challenges/journey-to-the-moon/problem)

Approach:- As there are n astronauts in total so no  of pairs can be n*(n-1)/2 and we dont want pair having astronauts from same country so we will subtract them from total no of pairs.

How will we find the pair of astronauts from same country?
=> We will join the nodes of astronauts from same country with edges and we will do dfs to count all the pairs.

Time complexity:- O(V+E)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<list<ll>> G;
vector<bool> visited;
ll vertices = 0;

void DFS(ll u)
{
    if (visited[u])
        return;
    visited[u] = true;
    vertices++;
    for (auto i : G[u])
        if (!visited[i])
            DFS(i);
}
int main()
{
    ll n, e, u, v;
    cin >> n >> e;
    ll ans = n * (n - 1) / 2;
    G.resize(n);
    visited.resize(n, false);
    vector<int> M;
    while (e--)
    {
        cin >> u >> v;
        G[u].push_front(v);
        G[v].push_front(u);
    }
    for (ll i = 0; i < n; i++)
    {
        vertices = 0;
        DFS(i);
        ans = ans - vertices * (vertices - 1) / 2;
    }
    cout << ans;
    return 0;
}