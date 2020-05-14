#include<stdio.h>

int main()
{
    int n,k=1;
    printf("Enter thr no. of rows : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
    
        for(int j=0;j<i;j++)
        { 
          if(i<(n/2)+1)
          printf("%d ",i);  
          else
          printf("%d ",n-i+1);       
        }      
        printf("\n");
    }
    return 0;
}