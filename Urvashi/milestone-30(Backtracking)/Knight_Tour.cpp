#include <bits/stdc++.h>
using namespace std;

#define n 8
int isSafe(int x , int y , int solve[n][n])
{
    // coordinates should be between the bound of the board and solve[x][y] == -1 shows that cell is unvisited
    return (x >= 0 && x < n && y >= 0 && y < n && solve[x][y] == -1) ; 
}

// to print the board.
void printBoard(int sol[n][n])
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
            cout<<" "<<setw(2) << sol[i][j] << " ";
        cout<<endl;

    }
}

int solveKnightTourUtil(int x , int y , int moveValue , int solve[n][n] , int xMove[n] , int yMove[n])
{
    int k , next_x , next_y ;
    // if we have visited the whole board then return .
    if(moveValue == n*n)
        return 1;
    
    for(k = 0 ; k < 8 ; k++)
    {
    	// going to next valid cell.
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if(isSafe(next_x , next_y , solve)) // if that cell is safe.
        {
            solve[next_x][next_y] = moveValue; //  then fill the moveValue in it.
            if(solveKnightTourUtil(next_x , next_y , moveValue + 1 , solve , xMove , yMove)) // checking next valid cell.
                return 1;
            else 
                solve[next_x][next_y] = -1 ; // if it is not valid then backtrack to last position.
        }
    }
    return 0 ;
}

int solveKnightTour()
{
    int sol[n][n];
    // initialise all the cells with -1.
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            sol[i][j] = -1 ;
        }
    }

    int xMove[n] = {2, 1 , -1 , -2 , -2 , -1 , 1 , 2};
    int yMove[n] = {1, 2 , 2 , 1 , -1 , -2 , -2 , -1};
    
    // fill the initial position with 0.
    sol[0][0] = 0 ;
    
    // if utility fxn return 0 then no solution exist. otherwise print the board.
    if(solveKnightTourUtil(0 , 0 , 1 , sol , xMove , yMove) == 0)
    {
        cout<<"Solution doesn't exist\n";
        return 0;
    }
    else
    {
        printBoard(sol);
    }
    return 1;
    
}
int main()
{
    solveKnightTour();
    return 0 ;
}
