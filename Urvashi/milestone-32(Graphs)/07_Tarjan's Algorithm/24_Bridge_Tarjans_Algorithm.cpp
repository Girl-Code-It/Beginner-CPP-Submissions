/* Bridge:- A Bridge is an edge in the graph if after removing that edge the graph will split into components.

Time complexity:- O(V+E)

Steps:-
1. We will do dfs and will check before backtracking from any node that if its low value can be changed or not
means if there is a back edge from that node or not.
2. We will check if the given edge contains the node which is the parent of the current node, if not then that
node is an back edge means it is the another path to make the graph joined even after removing the current edge.

Note:- A back edge will never be a bridge because it is the another way to join the graph and form a cycle.

*/

#include <bits/stdc++.h>
using namespace std;
#define V 5
#define pb push_back

unordered_map<int, vector<int>> adj;

void DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<pair<int, int>> &bridge)
{
    // we will take a timer with value 0 and after travrsing each and every node we will increment the timer.
    static int time = 0;
    /* we will take 2 arrays discovery and low.
    Discovery array stores the time at which a particular node is discovered means the value of time variable 
    at that time.

    Low array stores the discovery value of the lowest value node reachable from that node.
    */
    disc[u] = low[u] = time; 
    time += 1; 

    // for every neighbour of u.
    for (int v : adj[u])
    {
        if (disc[v] == -1) //If v is not visited
        {
            parent[v] = u; // we will make an edge from u to v.
            DFS(v, disc, low, parent, bridge); // will do dfs for v.

            /* and at the time of returning we will check if we can update the low value of the u by 
            comparing its low value with its neighbour's low value */
            low[u] = min(low[u], low[v]);

            // if neighbour's low value is greater than discovery value of u means we find a bridge, because 
            // it means the lowest node reachable from subtree under v is below u in dfs tree.
            if (low[v] > disc[u])
                bridge.pb({u, v});
        }
        else if (v != parent[u]) //Ignore child to parent edge.
            low[u] = min(low[u], disc[v]);
    }
}

void findBridges_Tarjan()
{
    // making three arrays all starting with -1 values as we haven't visited any node yet.
    vector<int> disc(V, -1), low(V, -1), parent(V, -1);

    // bridge pair vector to store all the edges which are bridges.
    vector<pair<int, int>> bridge;

    // Traversing every node and checking if it have'nt traversed yet.
    for (int i = 0; i < V; ++i)
        if (disc[i] == -1) // if not traversed then traverse it.
            DFS(i, disc, low, parent, bridge); // DFS fxn will return bridge vector
    
    cout << "Bridges are: \n"; // we will print all the bridges.
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
