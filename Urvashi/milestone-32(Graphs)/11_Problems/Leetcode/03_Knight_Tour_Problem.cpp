// https://www.pepcoding.com/resources/online-java-foundation/graphs/knights-tour-official/ojquestion#

#include <bits/stdc++.h>
using namespace std;

// N x N chessboard
#define N 5
int visited[N][N] = {0};

// all 8 possible movements for a knight.
int row[] = {2, 1, -1, -2, -2, -1, 1, 2, 2};
int col[] = {1, 2, 2, 1, -1, -2, -2, -1, 1};

// Check if (x, y) is valid chess board coordinates. Note that a knight cannot go out of the chessboard
bool isValid(int x, int y)
{
    if (x < 0 || y < 0 || x >= N || y >= N)
        return false;

    return true;
}

// Recursive function to perform the Knight's tour using backtracking
void KnightTour(int x, int y, int pos)
{
    // mark current square as visited
    visited[x][y] = pos;

    // if all squares are visited, print the solution
    if (pos >= N * N)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << visited[i][j] << " ";
            cout << endl;
        }
        cout << endl;

        // backtrack before returning
        visited[x][y] = 0;
        return;
    }

    // check for all 8 possible movements for a knight and recur for each valid movement
    for (int k = 0; k < 8; k++)
    {
        // Get the new position of Knight from current position on chessboard
        int newX = x + row[k];
        int newY = y + col[k];

        // if new position is a valid and not visited yet
        if (isValid(newX, newY) && !visited[newX][newY])
            KnightTour(newX, newY, pos + 1);
    }

    // backtrack from current square and remove it from current path
    visited[x][y] = 0;
}

// Print all Possible Knight's Tours in a chessboard
int main()
{
    int Row, Col;
    cin >> Row >> Col;

    int pos = 1;

    KnightTour(Row, Col, pos);

    return 0;
}