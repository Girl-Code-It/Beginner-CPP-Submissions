#include<stdio.h>

//To determine queens can placed or not
int is_attacked(int n,int board[][n],int x,int y)
{
    //check possibility
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((board[i][j] == 1) && (i+j == x+y || i-j == x-y || i == x || j == y))
                return 1;
        }
    }
    return 0;
}

int nQueens(int n,int board[][n],int queens)
{
    //All queens have been placed
    if(queens == 0)
        return 1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(is_attacked(n,board,i,j))
                continue;//Skip that place
 
                board[i][j] = 1;//place queen

            if(nQueens(n,board,queens-1))
                return 1;//queen placed successfully

            board[i][j] = 0;//remove queen(baktrack)
        }
    }
    return 0;
}
int main()
{  
    int n;
    scanf("%d",&n);
    int board[n][n];
    int queens = n;
    memset(board,0,n*n*sizeof(int));

    if(nQueens(n,board,queens))
    {
        //printf("YES\n");
       for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                printf("%d ",board[i][j]);
            printf("\n");
        }
    }
    else
        printf("Not possible\n");
}