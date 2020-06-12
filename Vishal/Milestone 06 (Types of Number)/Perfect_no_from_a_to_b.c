#include<stdio.h>

int main ()
{
    int a,b,sum=0,temp;
    printf("Enter the lower and upper limit to find perfect no \n");
    scanf("%d %d",&a,&b);
    printf("Perfect no. Between %d and %d are: \n",a,b);
    for(int j=a;j<=b;j++)
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
    
       
    
    