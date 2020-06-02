#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter thr no. of rows : ");
    scanf("%d",&n);
    printf("1\n");
    for(int i=1;i<n;i++)
    {
       k =0;
        for(int j=1;j<=2*i;j++)
        {
           if(j<=i)
          printf("%d ",i+j+1);
          else
         {
          printf("%d ",2*i-k);
          k++;  
          }
        }
        printf("\n");
    }
    return 0;
}