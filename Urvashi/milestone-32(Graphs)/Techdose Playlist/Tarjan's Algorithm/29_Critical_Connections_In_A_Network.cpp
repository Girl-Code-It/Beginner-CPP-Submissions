/* (https://leetcode.com/problems/critical-connections-in-a-network/)

Critical connections:- Connections by removing which will increase the components in the network.
Or, the connections which is the only connection to join to server in our network. It is same as the bridges.

So, we can apply tarjans Algorithm to find no of bridges in the graph.

Time complexity:- O(V+E)

Steps:-
1. We will do dfs and will check before backtracking from any node that if its low value can be changes or not
means if there is a back edge from that node or not.
2. We will check if the given edge contains the node which is the parent of the current node, if not then that
node is an back edge means it is the another path to make the graph joined even after removing the current edge.

Note:- A back edge will never be a bridge because it is the another way to join the graph and form a cycle.

*/

class Solution
{
    unordered_map<int, vector<int>> adj; //Adj list
    void DFS(int u, vector<int> &disc, vector<int> &low, vector<int> &parent, vector<vector<int>> &bridges)
    {
        static int time = 0; //timestamp
        disc[u] = low[u] = time;
        time += 1;

        for (int v : adj[u])
        {
            if (disc[v] == -1) //If v is not visited
            {
                parent[v] = u;
                DFS(v, disc, low, parent, bridges);
                low[u] = min(low[u], low[v]);

                if (low[v] > disc[u])
                    bridges.push_back(vector<int>({u, v}));
            }
            else if (v != parent[u]) //Check for back edge
                low[u] = min(low[u], disc[v]);
        }
    }
    void findBridges_Tarjan(int V, vector<vector<int>> &bridges)
    {
        vector<int> disc(V, -1), low(V, -1), parent(V, -1);
        //Apply DFS for each component
        for (int i = 0; i < V; ++i)
            if (disc[i] == -1)
                DFS(i, disc, low, parent, bridges);
    }

public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        for (int i = 0; i < connections.size(); ++i) //Make Adj list
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        vector<vector<int>> bridges; //Store all the bridges as pairs
        findBridges_Tarjan(n, bridges);
        return bridges;
    }
};