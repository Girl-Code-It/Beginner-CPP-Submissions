// https://leetcode.com/problems/friend-circles/

// Solution 1: Using DFS + Visited array
// Space Complexity - O(N)

class Solution
{
public:
    void dfs(int i, vector<bool> &visited, vector<vector<int>> &M)
    {
        for (int j = 0; j < M.size(); j++)
        {
            if (M[i][j] == 1 && !visited[j])
            {
                visited[j] = 1;
                dfs(j, visited, M);
            }
        }
    }

    int findCircleNum(vector<vector<int>> &M)
    {
        int n = M.size(), count = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, M);
                count++;
            }
        }
        return count;
    }
};