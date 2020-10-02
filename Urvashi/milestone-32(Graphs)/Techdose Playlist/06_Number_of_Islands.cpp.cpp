class Solution {
public:
    void mark_current_island(vector<vector<char>>& grid, int x, int y, int r, int c)
    {
        // for out of bound cases or if we are not at land then simply return .
        if(x < 0 || x >= r || y < 0 || y >= c || grid[x][y] != '1')
            return;
        
        // 2 is to denote that we have visited the cell which is land.
        grid[x][y] = '2';
        
        // checing the adjacent cells , either they are land or not.
        mark_current_island(grid, x+1, y, r, c); // down.
        mark_current_island(grid, x-1, y, r, c); // up.
        mark_current_island(grid, x, y-1, r, c); // left.
        mark_current_island(grid, x, y+1, r, c); // right.
    }
    
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int rows = grid.size();
        if(rows == 0) // in case of empty grid there will be 0 islands.
            return 0;
        
        int cols = grid[0].size();
        
        //  Iterate for all the cells of the grid.
        int no_of_islands = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                // as 1 denoted land , so if we find a cell to be land then we will increment no of islands and 
				// will check its adjoining cells(upward, downward, left, right) whether its land or water .
                if(grid[i][j] == '1')
                {
                    mark_current_island(grid, i, j, rows, cols);
                    no_of_islands += 1;
                }
            }
        }
        return no_of_islands;
    }
};
