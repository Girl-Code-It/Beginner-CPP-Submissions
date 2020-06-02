#include<stdio.h>

int main()
{    int n;
     printf("Enter the no of rows \n");
     scanf("%d",&n);
     for(int i =1;i<=n;i++)
    {    int j=0;
        for(int space=1;space<=(n-i);space++)
        {
          printf("  ");      
        }  
         while( j!=(2*i-1))
        { 
          if(j==0||j==(2*i-2)||i==n)
          printf("* ");
          else
          printf("  ");
          j++;
        }
        printf("\n");
    }
    
    return 0;
}