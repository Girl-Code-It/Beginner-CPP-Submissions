// https://leetcode.com/problems/flower-planting-with-no-adjacent/

// Solution : Greedy Algorithm
// Time Complexity : O(N), Space Complexity - O(N)

class Solution 
{
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) 
    {
        vector<int>result(n);
        vector<vector<int>>adj(n);

        // Build Graph 
        for (int i = 0; i < paths.size(); i++)
        {
            adj[paths[i][0] - 1].push_back(paths[i][1] - 1);
            adj[paths[i][1] - 1].push_back(paths[i][0] - 1);
        }

        // As any node can have maximum 3 degree then, there will be always one available color
        for (int i = 0; i < n; i++)
        {
            // Used to check available color for garden i.
            bool color[5] = {false};

            // Mark neighbour colors
            for(auto j : adj[i])
                color[result[j]] = true;
            
            // Put available color
            for (int k = 1; k < 5; k++)
            {
                if(!color[k])
                    result[i] = k;
            }
        }
        return result;
    }
};