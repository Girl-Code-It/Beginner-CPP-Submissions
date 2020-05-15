#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    
      for(int j=1;j<=i;j++)
       {   if(i%2==0)
           printf("%d ",2*j); 
           else
           printf("%d ",2*j-1); 
       }      
        printf("\n");
    }
}
    