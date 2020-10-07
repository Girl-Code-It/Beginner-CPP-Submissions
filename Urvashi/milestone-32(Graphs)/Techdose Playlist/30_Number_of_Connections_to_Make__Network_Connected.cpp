/* (https://leetcode.com/problems/number-of-operations-to-make-network-connected/submissions/)

Time complexity:- O(V+E)

Steps to be followed:-
1. Firstly, make the adjacent list of all the nodes.
2. Apply dfs to traverse all the nodes, and make the visisted array to be true simultaneously, after performing
every dfs if we find any a node to be univisted then that node is presenr in the other component, so we will count the no of components present in the graph by the no of times we are performing the dfs.
3. we have to make all the components joined to become a single component so it it only possible when there will be min redundant edges as components-1 .

Redundant edges:- edges after removing those our graph will not get disconnected.

We will find the redundant edges used to join all the components by using the formula, 

redundant = edges-((n-1)-(components-1))

*/

class Solution
{
    void DFS(unordered_map<int, vector<int>> &adj, int curr, vector<bool> &visited)
    {
        visited[curr] = true;
        for (auto i : adj[curr])
            if (visited[i] == false)
                DFS(adj, i, visited);
    }

public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        vector<bool> visited(n, false);
        unordered_map<int, vector<int>> adj;
        //STEP-1: Make adjacency list
        int edges = 0;
        for (int i = 0; i < connections.size(); ++i)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
            edges += 1;
        }

        //STEP-2: Find No of components
        int components = 0;
        for (int i = 0; i < n; ++i)
            if (visited[i] == false)
            {
                components += 1;
                DFS(adj, i, visited);
            }

        //STEP-3: Count no of edges
        if (edges < n - 1) //If no of edges are less than that in MST
            return -1;
        int redundant = edges - ((n - 1) - (components - 1)); //Count redundant edges
        if (redundant >= (components - 1))                    //Check if we can join components using redundant edges
            return components - 1;
        return -1;
    }
};