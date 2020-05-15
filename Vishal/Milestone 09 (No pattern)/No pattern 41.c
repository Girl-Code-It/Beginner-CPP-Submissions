#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    
      for(int j=1;j<=(2*i-1);j++)
       {   if(i>=j)
           printf("%d ",2*j-1); 
           
       }      
     for(int j=2*i-3;j>=1;j--)
       {   if(i>j)
           printf("%d ",2*j-1); 
           
       }      
        printf("\n");
    }
}
    