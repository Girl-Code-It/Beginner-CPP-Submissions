#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    k=2*i-1;
      for(int j=1;j<=n+1-i;j++)
       {   
           printf("%d ",k);   
           k+=2;      
       }      
        printf("\n");
    }
}
    