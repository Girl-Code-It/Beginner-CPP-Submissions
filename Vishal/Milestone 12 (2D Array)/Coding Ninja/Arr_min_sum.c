#include<stdio.h>
#include<math.h>
void input_element(int m,int n,int arr[][n])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Enter the element a[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

void print_matrix(int m,int n,int arr[][n])
{
    printf("\nMatrix :\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}

int minSum(int input[][3], int m)
{
    int temp[6];
    for(int i=0; i<m-1; i++)
    {
        temp[0] = input[i][1] + input[i+1][0];
        temp[1] = input[i][2] + input[i+1][0];
        temp[2] = input[i][0] + input[i+1][1];
        temp[3] = input[i][2] + input[i+1][1];
        temp[4] = input[i][0] + input[i+1][2];
        temp[5] = input[i][1] + input[i+1][2];
        input[i+1][0] = min(temp[0],temp[1]);
        input[i+1][1] = min(temp[2],temp[3]);
        input[i+1][2] = min(temp[4],temp[5]);
    }
    
    int min_sum = min(input[m-1][0],min(input[m-1][1],input[m-1][2]));
    printf("\nMinimum sum is %d.\n",min_sum);
}

int min(int x,int y)
{
    if(x>y)
    return y;
    else
    return x;
}
void main()
{
    int a[10][10],m,n;
    printf("Enter the no. Of rows : ");
    scanf("%d",&m);
   
    input_element(m,3,a);

    print_matrix(m,3,a);

    minSum(a,m);

}