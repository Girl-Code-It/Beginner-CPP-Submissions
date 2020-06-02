#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    
      for(int j=1;j<=i;j++)
       {   if(i%2!=0)
           printf("%d ",j);    
       }     
      for(int j=i;j>=1;j--)
       {   if(i%2==0)
           printf("%d ",j);    
       }     
        printf("\n");
    }
}
    