#include<stdio.h>

int board[10][10] = {0};

int countMove(int i,int j,int n)
{
    int temp = 0;
    if(i < 0 || j < 0 || i >= 10 || j >= 10 || n == 0)
        return 0;//invalid move

    if(n == 1 && board[i][j] == 1)
        return 0;//Already placed 

    if(n == 1)
    {
        temp = 1;//at this position knight is coming first time
        board[i][j] = 1;
    }
    return temp + countMove(i+1,j+2,n-1)
           + countMove(i-1,j+2,n-1)
           + countMove(i-2,j+1,n-1)
           + countMove(i-2,j-1,n-1)
           + countMove(i-1,j-2,n-1)
           + countMove(i+1,j-2,n-1)
           + countMove(i+2,j-1,n-1)
           + countMove(i+2,j+1,n-1);

}
int main()
{
    int i,j,n;
    scanf("%d %d %d",&i,&j,&n);

    printf("%d\n",countMove(i-1,j-1,n+1));
    return 0;
}