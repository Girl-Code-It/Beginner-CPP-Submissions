/* (https://leetcode.com/problems/find-eventual-safe-states/)
   0 - unvisited
   2 - visited
   1 - visited + processed
   
   Eventual safe states are the nodes which do not lead to a cycle.
   
   Time complexity:- O(V+E)
*/
class Solution
{
    bool isCyclic(vector<vector<int>> &graph, vector<int> &vis, int &curr)
    {
        if (vis[curr] == 2)
            return true;

        vis[curr] = 2;
        for (int i = 0; i < graph[curr].size(); i++)
        {
            if (vis[graph[curr][i]] != 1)
                if (isCyclic(graph, vis, graph[curr][i]))
                    return true;
        }
        vis[curr] = 1;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        vector<int> vis(graph.size(), 0);
        vector<int> res;
        for (int i = 0; i < graph.size(); i++)
        {
            if (!isCyclic(graph, vis, i))
                res.push_back(i);
        }
        return res;
    }
};