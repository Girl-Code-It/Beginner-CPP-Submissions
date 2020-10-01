class Solution
{
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int row[9][9] = {0},col[9][9] = {0},box[9][9] = {0};

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                {
                    int c = board[i][j] - '1';
            
                    if(row[i][c]++ > 0 | col[j][c]++ > 0 | box[i/3*3 + j/3][c]++)
                        return false;
                }
            }
        }

        return true;
    }
};