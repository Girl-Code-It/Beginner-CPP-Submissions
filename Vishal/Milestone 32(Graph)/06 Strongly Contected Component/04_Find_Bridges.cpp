/* 
    https://leetcode.com/problems/critical-connections-in-a-network/

    Bridge : It is an edge which if it is removed then the graph will split into components.
    Time complexity:- O(V+E)
*/

#include <bits/stdc++.h>
using namespace std;
#define V 5
#define pb push_back

unordered_map<int, vector<int>> adj;

void DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<pair<int, int>> &bridge)
{
    static int time = 0;
    disc[u] = low[u] = time; 
    time++; 

    for (int v : adj[u])
    {
        //If v is not visited
        if (disc[v] == -1) 
        {
            // we will make an edge from u to v and do a DFS.
            parent[v] = u; 
            DFS(v, disc, low, parent, bridge); 

            // Update low value of parent
            low[u] = min(low[u], low[v]);

            if (low[v] > disc[u])
                bridge.pb({u, v});
        }
        //Ignore child to parent edge.
        else if (v != parent[u]) 
            low[u] = min(low[u], disc[v]);
    }
}

void findBridges_Tarjan()
{
    vector<int> disc(V, -1), low(V, -1), parent(V, -1);

    vector<pair<int, int>> bridge;

    for (int i = 0; i < V; ++i)
        if (disc[i] == -1) 
            DFS(i, disc, low, parent, bridge); 
    
    cout << "Bridges are: \n"; 
    for (auto it : bridge)
        cout << it.first << "-->" << it.second << "\n";
}

int main()
{
    adj[0].pb(2);
    adj[2].pb(0);
    adj[0].pb(3);
    adj[3].pb(0);
    adj[1].pb(0);
    adj[0].pb(1);
    adj[2].pb(1);
    adj[1].pb(2);
    adj[3].pb(4);
    adj[4].pb(3);

    findBridges_Tarjan();
    return 0;
}