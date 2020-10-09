// https://leetcode.com/problems/number-of-islands/

/*
    Time Complexity - O(M + N) 
*/

class Solution
{
public:
    void dfs(vector<vector<char>> &g, int r, int c, int &m, int &n, int *dr, int *dc)
    {
        // Mark land to avoid mutliple calculation
        g[r][c] = '0';

        // Move all possible four direction
        for (int i = 0; i < 4; i++)
        {
            int rr = r + dr[i];
            int cc = c + dc[i];

            // If index is out of bound or there is water so skip that
            if (rr < 0 || rr >= m || cc < 0 || cc >= n || g[rr][cc] == '0')
                continue;

            //Else apply dfs
            dfs(g, rr, cc, m, n, dr, dc);
        }
    }

    int numIslands(vector<vector<char>> &g)
    {
        // Check Graph is empty or not
        int m = g.size();
        int n = m ? g[0].size() : 0;

        // Count number of islands
        int count = 0;

        // Uses as direction 
        int dr[] = {0, 0, 1, -1};
        int dc[] = {1, -1, 0, 0};

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // If found a land, then apply a dfs and mark all adjacent land as '0'
                if (g[i][j] == '1')
                {
                    //Increase count
                    count++;
                    dfs(g, i, j, m, n, dr, dc);
                }
            }
        }
        return count;
    }
};