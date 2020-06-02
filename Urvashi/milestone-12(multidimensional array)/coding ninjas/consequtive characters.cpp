#include<stdio.h>
#define R 3
#define C 3                             //question-17(consequtive chars):-Given a matrix of characters.. 
int x[] = {0, 1, 1, -1, 1, 0, -1, -1};  // Find length of the longest path from a given character(a list of such characters will be given), 
int y[] = {1, 0, 1, 1, -1, -1, 0, -1};  // such that all characters in the path are consecutive to each other, i.e.,
int dp[R][C];                           // every character in path is next to previous in alphabetical order
int isvalid(int i, int j)               //It is allowed to move in all 8 directions from a cell.
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
int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}
int getLenUtil(char mat[R][C], int i, int j, char prev)
{
    if (!isvalid(i, j) || !isadjacent(prev, mat[i][j]))
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = 0;
    for (int k=0; k<8; k++)
        ans = max(ans, 1 + getLenUtil(mat, i + x[k], j + y[k], mat[i][j]));
    return dp[i][j] = ans;
}
int getLen(char mat[R][C], char s)
{

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

int main() {
    char mat[R][C],s;
    printf("Enter the character\n");
    scanf("%c",s);
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
        {
		 scanf(" %c",&mat[i][j]);
         dp[i][j]=-1;}
    }
    printf(" matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
         printf(" %c\t",mat[i][j]);
       printf("\n");
    }
    printf("%d\n",getLen(mat, 'a'));
    printf("%d\n",getLen(mat, 'e'));
    printf("%d\n",getLen(mat, 'b'));
    printf("%d\n",getLen(mat, 'f'));
    return 0;
}
