
#include<stdio.h>
#define R 3
#define C 3
int x[] = {0, 1, 1, -1, 1, 0, -1, -1};
int y[] = {1, 0, 1, 1, -1, -1, 0, -1};
int dp[R][C];
int isvalid(int i, int j)
{
    if (i < 0 || j < 0 || i >= R || j >= C)
        return 0;
    return 1;
}

int isadjacent(char prev, char curr)
{
    if((curr - prev) == 1)
        return 1;
    else
        return 0;
}

int getLenUtil(char mat[R][C], int i, int j, char prev)
{
    if (!isvalid(i, j) || !isadjacent(prev, mat[i][j]))
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = 0;
    for (int k=0; k<8; k++)
        ans = max(ans, 1 + getLenUtil(mat, i + x[k],
                                      j + y[k], mat[i][j]));
    return dp[i][j] = ans;
}
int getLen(char mat[R][C], char s)
{
    memset(dp, -1, sizeof dp);
    int ans = 0;
    for (int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
        {
            // check for each possible starting point
            if (mat[i][j] == s) {
                // recur for all eight adjacent cells
                for (int k=0; k<8; k++)
                    ans = max(ans, 1 + getLenUtil(mat,i + x[k], j + y[k], s));
            }
        }
    }
    return ans;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}
int main() {
    char mat[R][C],s;
    printf("Enter the character\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
         scanf(" %c",&mat[i][j]);
    }
    printf("Given matrix....\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
         printf(" %c\t",mat[i][j]);
       printf("\n");
    }
    printf("Enter the char : ");
    scanf(" %c",&s);
    printf("The length of the consecutive char %c is :%d\n",s,getLen(mat, s));
    
    return 0;
}