#include<bits/stdc++.h>
#define N 4

using namespace std;

//allowed moves : forward and downward

void help_rat(int maze[N][N], int row, int col, string &s)
{
    //base condition
    if(row >= N || col >= N || maze[row][col] == 0)
    {
        s.pop_back();
        return;
    }
    else if(row == N - 1 and col == N - 1)
    {
        //got the answer 
        cout << s << endl;
        s.pop_back();
        return;
    }

    help_rat(maze, row, col + 1, s += 'F');
    help_rat(maze, row + 1, col, s += 'D');

    s.pop_back();
}

int main()
{
    int maze[N][N] = {1, 0, 0, 0, 
                      1, 1, 0, 1,
                      1, 0, 0, 0,
                      1, 1, 1, 1};
    string str = "";
    help_rat(maze, 0, 0, str);
    
}
