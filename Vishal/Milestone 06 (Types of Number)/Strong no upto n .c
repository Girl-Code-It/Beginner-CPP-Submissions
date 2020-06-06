
#include <stdio.h>

int main()
{
    int n,sum=0,r,temp,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Strong no between 1 and %d are :\n",n);
   for(int j=1;j<=n;j++)
    {
     temp=j;
    while(temp!=0)
    {
        r = temp%10;
        int c=1;
     for(int i=1; i<=r;i++)
    {
         
         c*=i;
    } 
        sum+= c;
        temp/=10;    
    }
    if(sum==j)
    printf("%d \n",j);
    sum=0;
    }
    return 0;
}






