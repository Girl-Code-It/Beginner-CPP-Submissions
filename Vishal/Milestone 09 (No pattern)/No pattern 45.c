#include<stdio.h>

int main()
{
    int n,k=1;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    
      for(int j=1;j<=i;j++)
       {   
           printf("%2d ",k);  
           k++;  
       }     
        printf("\n");
    }
}
    