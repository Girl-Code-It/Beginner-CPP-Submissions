/* (https://leetcode.com/problems/rotting-oranges/submissions/)

Solution based on BFS.

*/
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {

        if (grid.empty()) // if there is no orange.
            return 0;

        int countFreshOranges = 0;
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q; // queue to store the index of the cell where rotten oranges are placed.

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                    countFreshOranges++;
                else if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }

        int time = 0;
        // four adjacent positions at which the oranged placed will get rotten.
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

        while (countFreshOranges != 0 && !q.empty())
        {
            int qsize = q.size();

            for (int i = 0; i < qsize; i++)
            {
                int rottenI = q.front().first;
                int rottenJ = q.front().second;
                q.pop();

                for (auto d : dirs)
                {
                    int newX = rottenI + d.first;
                    int newY = rottenJ + d.second;
                    // if we got any fresh orange adjacent to the rotten orange then it will get rotten and
                    // count of fresh oranges will reduce and we will push the new index of rotten orange in 
                    // the queue.
                    if (newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == 1)
                    {
                        grid[newX][newY] = 2;
                        countFreshOranges--;
                        q.push({newX, newY});
                    }
                }
            }
            time++;
        }
        return countFreshOranges == 0 ? time : -1;
    }
};