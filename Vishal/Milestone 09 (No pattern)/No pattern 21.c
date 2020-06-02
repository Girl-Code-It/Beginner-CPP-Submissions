#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    k=n;    
      for(int j=1;j<=n+1-i;j++)
       {    
           printf("%d ",n+1-i);            
       }      
        printf("\n");
    }
}
    