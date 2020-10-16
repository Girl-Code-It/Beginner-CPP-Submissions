// https://www.pepcoding.com/resources/online-java-foundation/graphs/knights-tour-official/ojquestion

#include <bits/stdc++.h>
using namespace std;
//Board size is fixed, as n = 5 is the constraint.
#define n 5
int board[n][n] = {0};
int dir[8][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

void displayBoard()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void knightTour(int row, int col, int move)
{
    // Boundary + Already Filled Condition
    if (row < 0 || row >= n || col < 0 || col >= n || board[row][col] != 0)
        return;

    // If whole board is traversed
    if (move == n * n)
    {
        board[row][col] = move;
        displayBoard();

        // Backtracking
        board[row][col] = 0;
        return;
    }

    // Make move
    board[row][col] = move;
    for (int i = 0; i < 8; i++)
    {
        int Row = row + dir[i][0];
        int Col = col + dir[i][1];
        knightTour(Row, Col, move + 1);
    }

    // Backtracking
    board[row][col] = 0;
}

int main()
{
    int m, row, col;
    cin >> m >> row >> col;
    knightTour(row, col, 1);
    return 0;
}