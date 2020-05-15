#include<stdio.h>

int main()
{
    int n,l,k=0;
    printf("Enter the no : ");
    scanf("%d",&n);
    l=n;
    for(int i=1;i<=n;i++)
    {
      for(int j=0;j<n;j++)
       {
           if(i+j<=n)
           printf("%2d",i+j);
           else
          printf("%2d",n);           
       }       
        printf("\n");
    }


}
    