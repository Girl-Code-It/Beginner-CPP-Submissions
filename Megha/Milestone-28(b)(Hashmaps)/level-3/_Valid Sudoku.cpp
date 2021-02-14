//https://leetcode.com/problems/valid-sudoku/submissions/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0};
        int col[9][9] = {0};
        int boxes[9][9] = {0};
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    int x = board[i][j] - '1';
                if(rows[i][x]++ > 0 || col[j][x]++ > 0 || boxes[(i/3)*3 + j/3][x]++)
                    return false;
                }
            }
        }
            
        return true;
    }
};
