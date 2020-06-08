#include<stdio.h>

int main ()
{
    int n,sum=0,temp;
    printf("Enter the no. \n");
    scanf("%d",&n);
    printf("Perfect no. Between 1 and %d are: \n",n);
    for(int j=1;j<=n;j++)
    {
    temp=j;
    for(int i=1;i<temp;i++)
    {
        if((temp%i)==0)
        {
        sum+=i;
        }
   
    }   
    if(sum==j)
    printf("%d\n",j);  
    sum=0;
   }
   return 0;
 }
    
       
    
    