#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    
      for(int j=1;j<=i;j++)
       {   
           printf("%d ",j); 
           
       }      
     for(int j=2*i-3;j>=1;j--)
       {   if(i>j)
           printf("%d ",j); 
           
       }      
        printf("\n");
    }
}
    