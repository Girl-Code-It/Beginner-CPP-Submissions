#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    k =1;
      for(int j=1;j<=2*n-i;j++)
       {  
          if(j<=i) 
          printf("%d ",j);
          else
          printf("  ");       
       }   
        for(int j=1;j<=i;j++)
        printf("%d ",i-j+1);
        printf("\n");
    }
     
}
    
    