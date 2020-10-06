// https://leetcode.com/problems/possible-bipartition/

// Solution 1: Using HashMap/ HashSet build two hashMap such that no two dislike each other are in same group.
// Solution 2: Using DFS 
class Solution
{
    bool isBipartite(int node, vector<vector<int>> &adj, vector<int> &color)
    {
        queue<int> q;
        q.push(node);
        color[node] = 1;

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (int ele : adj[curr])
            {
                // Find cycle of odd length
                if (color[ele] == color[curr])
                    return false;

                // Uncolored
                else if (color[ele] == -1)
                {
                    color[ele] = 1 - color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }

public:
    bool possibleBipartition(int N, vector<vector<int>> &dislikes)
    {
        // Adjacent list
        vector<vector<int>> adj(N + 1);

        for (int i = 0; i < dislikes.size(); i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        
        //Color 
        vector<int>color(N+1, -1);

        for (int i = 1; i <= N; i++)
        {
            if (color[i] == -1 && !isBipartite(i, adj, color))
           return false;
            
        }
        return true;
    }
};