#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows\n");
     scanf("%d",&n);
     for(int i =1;i<=n;i++)
    {    int j=0;
        for(int space=1;space<=(n-i);space++)
        {
          printf("  ");      
        }  
         while( j!=(2*i-1))
        { 
          printf("* ");
          j++;
        }
        printf("\n");
    }
     for(int i =1;i<=n-1;i++)
    {    int j=0;
        for(int space=1;space<=i;space++)
        {
          printf("  ");      
        }  
        while(j!=(2*(n-i)-1))
        {
          printf("* ");  
        j++; 
        }      
        printf("\n");
    } 
    return 0;
}