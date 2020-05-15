#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter the no : ");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++)
    {    k=n+1-i;
      for(int j=1;j<=i;j++)
       {   while(k!=n+1)
           {
           printf("%d ",k);   
           k++;
           }   
       }      
        printf("\n");
    }
}
    