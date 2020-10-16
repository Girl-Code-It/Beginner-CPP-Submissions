// https://leetcode.com/problems/redundant-connection/

// Using Union Find Operation
// But Time complexity of below solution will be N^2 as searching in worst case cost O(N).
// For Optimazation we can do path compression and union by rank.
// You can check those code in union_by_rank_and_find_by_path_compression.cpp in Graph Cycle folder.
class Solution
{
public:
    vector<int> findRedundantConnection(vector<vector<int>> &edges)
    {
        vector<int> parent(edges.size() + 1, 0);
        for (auto &e : edges)
        {
            int v1 = e[0], v2 = e[1];
            while (parent[v1])
                v1 = parent[v1];
            while (parent[v2])
                v2 = parent[v2];
            if (v1 == v2)
                return e;
            parent[v1] = v2;
        }
        return {};
    }
};