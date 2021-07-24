#include<stdio.h>
#include<math.h>

int main()
{    int n;
     printf("Enter the no of rows \n");
     scanf("%d",&n);
     for(int i =0;i<n;i++)
    {
        for(int j= 0;j<n;j++)
        {
           printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}