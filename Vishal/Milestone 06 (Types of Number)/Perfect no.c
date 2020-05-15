#include<stdio.h>

int main ()
{
    int n,sum=0,temp;
    printf("Enter the no. \n");
    scanf("%d",&n);
    temp=n;
    for(int i=1;i<temp;i++)
    {
        if((temp%i)==0)
        {
        sum+=i;
        }
        
    }   
    if(sum==n)
    printf("%d is a perfect no.",n);
    else
    printf("%d is not a perfect no.",n);  
    return 0;
 }
    
       
    
    