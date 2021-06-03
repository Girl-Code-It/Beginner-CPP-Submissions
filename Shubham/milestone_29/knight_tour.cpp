#include<bits/stdc++.h>
#define N 5

using namespace std;

void display_board(int chess[N][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            cout << chess[i][j] << " ";
        cout << endl;
    }
}

void knightTour(int chess[N][N], int row, int col, int move)
{
    if(row < 0 || col < 0 || row >= N || col >= N || chess[row][col] > 0)
        return;

    else if(move == N * N)
    {
        chess[row][col] = move;
        display_board(chess);
        cout << endl << endl;
        chess[row][col] = 0;
        exit(0);
        return;
    }
    chess[row][col] = move;
    knightTour(chess, row - 2, col + 1, move + 1);
    knightTour(chess, row - 1, col + 2, move + 1);
    knightTour(chess, row + 1, col + 2, move + 1);
    knightTour(chess, row + 2, col + 1, move + 1);
    knightTour(chess, row + 2, col - 1, move + 1);
    knightTour(chess, row + 1, col - 2, move + 1);
    knightTour(chess, row - 1, col - 2, move + 1);
    knightTour(chess, row - 2, col - 1, move + 1);
    chess[row][col] = 0;
}

int main()
{
    int chess[N][N] = {0};
    knightTour(chess, 0, 0, 1);
}
