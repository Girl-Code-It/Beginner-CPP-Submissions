#include<stdio.h>

int main()
{   char a[10];
    int n,l;
    printf("Enter ur partner name\n");
    scanf("%s",&a);
    l = strlen(a);
    printf("Enter any no : ");
    scanf("%d",&n);
    printf("\n");
    for(int i =1;i<=n/3;i++)
    {    int j=1;
        for(int space=1;space<=(n/3)-i;space++)
        {
           printf(" ");
        }
        while(j!=n)
        {   if(j<=2*i+n/3)
           printf("*");
            else
            printf(" ");
           j++;
        }
        for(int k=0;k<(2*i+n/3);k++)
        printf("*");
        printf("\n"); 
    }
    for(int i=1;i<=(2*n-7-l);i++)
    {
       if(i==n-7)
       printf("love u %s",a);
       else
       printf("*");
    } printf("\n");
     for(int i =1;i<=n;i++)
    {    int j=1;
        for(int space=1;space<=i;space++)
        {
          printf(" ");      
        }  
        while(j!=(2*(n-i)+1))
        {
           printf("*");  
           j++; 
        }      
        printf("\n");
    } 
    return 0;
}