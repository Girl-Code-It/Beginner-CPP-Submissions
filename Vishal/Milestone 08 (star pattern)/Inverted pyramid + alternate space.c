#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows \n");
     scanf("%d",&n);
     for(int i =1;i<=n;i++)
    {    int j=0;
        for(int space=1;space<=i;space++)
        {
          printf("  ");      
        }  
        while(j!=(2*(n-i)+1))
        {
          if(j%2!=0)
          printf("* "); 
        else
        printf("  ");
        j++; 
        }      
        printf("\n");
    } 
    return 0;
}