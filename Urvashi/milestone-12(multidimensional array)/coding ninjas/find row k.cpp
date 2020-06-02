#include<stdio.h>
#define n 3               //question-16(find row K):-Given a square binary matrix mat[n][n],
int Find_Row(int a[][n])  // find k such that all elements in k’th row are 0 and all elements in k’th column are 1. 
{                         //The value of mat[k][k] can be anything (either 0 or 1). If no such k exists, return -1.
    int k = -1,i = 0,j = n-1;
    while(i<n && j>=0)
    {
        if(a[i][j] == 0)
        { while(j>=0 && (a[i][j] == 0 || i ==j))
               { j--;}

            if(j == -1){
                k = i;  
                break;
                }
           else
                i++;
        }
        else
        {while(i<n && (a[i][j] == 1 || i ==j)) 
                {i++;}
            if(i == n){
                k = j; 
                break;
               }
            else
                j--;
        }
    }
    if(k == -1) 
     { return k;}
    for(int i=0; i<n; i++)
        if(k != i && (a[i][k] != 1))
            return -1;
    for(int j=0; j<n; j++)
        if(k != j && (a[k][j] != 0))
            return -1;
    return k;
}
int main()
{
    int  mat[3][3],ans;
    printf("Enter the binary element :\n");
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    scanf("%d",&mat[i][j]);
    printf("\nMatrix...\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",mat[i][j]);
        printf("\n");
    }
    ans = Find_Row(mat);
    if(ans == -1)
        printf("\nNo such row exist");
    else
        printf("\nThe value of k is : %d",ans);
    return 0;
}
