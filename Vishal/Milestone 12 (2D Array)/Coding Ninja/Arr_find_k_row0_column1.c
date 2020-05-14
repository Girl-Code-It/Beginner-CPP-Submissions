#include<stdio.h>

int Find_Row(int n,int a[][n])
{
    int k = -1,i = 0,j = n-1;

    while(i<n && j>=0)
    {
        if(a[i][j] == 0)
        {
            //check row
            while(j>=0 && (a[i][j] == 0 || i ==j))
               { j--;}

            if(j == -1){
                k = i;  //assign the value of row
                break;
                }
           else
                i++;
        }

        else
        {
            //check column
            while(i<n && (a[i][j] == 1 || i ==j))
                {i++;}

            if(i == n){
                k = j;    //assign the value of column
                break;
               }
            else
                j--;
        }
    }
    //No such row exist
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
    int n,mat[5][5],ans;
    printf("Enter the order of the matrix\n");
    scanf("%d",&n);

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

    ans = Find_Row(n,mat);
    if(ans == -1)
        printf("\nNo such row exist");
    else
        printf("\nThe value of k is : %d",ans);
        
    return 0;
}