#include <bits/stdc++.h>

using namespace std;


bool isSafe(int arr[][10], int row, int col, int n)
{
    for(int i = row - 1; i >= 0; i--)
    {
        if(arr[i][col] == 1)
            return false;
    }

    //left diagonal attack check
    for(int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--)
    {
        if(arr[i][j] == 1)
            return false;
    }
    
    //right diagonal attack check
    for(int i = row - 1 , j = col + 1; i >= 0 and j < n; i--, j++)
    {
        if(arr[i][j] == 1)
            return false;
    }

    return true;

}
void print(int chess[][10], int n)
{
    for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n; col++)
        {
            if(chess[row][col] == 1)
                cout << 'Q' << " ";
            else
                cout << '_' << " ";
        }
        cout << endl;
    }
}
void solveNQueens(int chess[][10], int row, int n)
{
    if(row == n)
    {
        print(chess, n);
        cout << endl << endl;
        return;    
    }

    for(int col = 0; col < n; col++)
    {
        if(isSafe(chess, row, col, n))
        {
            chess[row][col] = 1;
            solveNQueens(chess, row+1, n);  
            chess[row][col] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int chess[10][10] = {0};
    solveNQueens(chess, 0, n);

}
