// https://leetcode.com/problems/rotting-oranges/

/* Solution :

    Two Cases :
    1. All oranges can't be rotted.
    => This will happen iff we have disconnected component.
    
    2. All oranges will rotted after some time.
    => So, we need a minimum time. We can find minimum time using BFS.

*/

class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size(), m = grid[0].size(), fresh = 0;

        // Push rotten oranges for BFS, pair define coordinates.
        queue<pair<int, int> >q;

        // for all posible direction
        vector<pair<int,int> >dir = {{-1,0},{1,0},{0,-1},{0,1}};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // Increase the count of fresh oranges
                if(grid[i][j] == 1)
                fresh++;

                // Add rotten oranges in queue
                if(grid[i][j] == 2)
                q.push({i,j});
            }
        }
        
        // Initialised to -1 since after each step we increment the time by 1 and initially all rotten oranges started at 0.
        int ans = -1;

        // Doing BFS
        while(!q.empty())
        {
            int size = q.size();
            ans++;
            while (size--)
            {
                auto t = q.front();
                q.pop();

                for (int i = 0; i < 4; i++)
                {
                    int r = t.first + dir[i].first;
                    int c = t.second + dir[i].second;

                    if (r >= 0 && r < n && c >= 0 && c < m && grid[r][c] == 1)
                    {
                        // Make orange rotten, push in queue and decrease count of fresh oranges
                        grid[r][c] = 2;
                        q.push({r,c});
                        fresh--;
                    }
                }
            }
        }

        // If fresh oranges are there in grid then return -1
        if(fresh)
            return -1;
        
        return ans == -1 ? 0 : ans;
    }
};