#include<iostream>

using namespace std;

bool isValid(int board[9][9], int row, int col, int val)
{
    //row duplicate check
    for(int j = 0; j < 9; j++)
        if(board[row][j] == val)
            return false;


    //col duplicate check
    for(int i = 0; i < 9; i++)
        if(board[i][col] == val)
            return false;

    //submatrix duplicate check
    int sub_row = row / 3 * 3;
    int sub_col = col / 3 * 3;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[sub_row + i][sub_col + j] == val)
                return false;

    return true;
}

void print_board(int board[9][9])
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}
void solveSudoku(int board[9][9], int row, int col)
{
    if(row == 9)
    {
        print_board(board);
        return; 
    }
    int next_row = 0;
    int next_col = 0;

    if(col == 8)
        next_row = row + 1, next_col = 0;
    else
        next_row = row, next_col = col + 1;


    if(board[row][col] != 0)
        solveSudoku(board, next_row, next_col);
    else
    {
        for(int po = 1; po <= 9; po++)
        {
            if(isValid(board, row, col, po))
            {
                board[row][col] = po;
                solveSudoku(board, next_row, next_col);
                board[row][col] = 0;
            }
        }
    }    
}
int main()
{
    int board[9][9] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
    solveSudoku(board, 0, 0);
}
