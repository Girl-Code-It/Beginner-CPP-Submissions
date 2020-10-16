// https://leetcode.com/problems/find-eventual-safe-states/description/

/* 
    Question description is little bit messy. So I am explaining the question first?
    We have to find such nodes from where there is a gurrantee to reach a terminal node(node having 0 outgoing edge).I.e,
    We have to find node which doesn't form cycle in a graph.

    Solution : Cycle detection in directed graph using graph coloring
    Time complexity - O(V+E)
*/ 

class Solution
{
public:
    bool dfs(vector<vector<int>> &graph, vector<int> &color, int node)
    {
         // Initially assume that the node is unsafe.
        color[node] = 1;

        for (auto cur : graph[node])
            if ((color[cur] == 0 && dfs(graph, color, cur)) || color[cur] == 1)
                return true;

        // If there is no cycle mark node as safe.
        color[node] = 2; 
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        vector<int> color(graph.size()), result;

        // If node is visited and safe or unvisited and does not contain cycle then add it to the answer.
        for (int i = 0; i < graph.size(); i++)
            if (color[i] == 2 || !dfs(graph, color, i))
                result.push_back(i);

        return result;
    }
};