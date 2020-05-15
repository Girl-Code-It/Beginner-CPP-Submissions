#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    k=n;    
      for(int j=1;j<=i;j++)
       {   
           printf("%d ",k);   
           k--;      
       }      
        printf("\n");
    }
}
    