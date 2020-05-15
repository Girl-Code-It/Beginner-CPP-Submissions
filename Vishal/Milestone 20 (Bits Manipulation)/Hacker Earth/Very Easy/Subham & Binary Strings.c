#include<stdio.h>

int main()
{
    int t,n;
    char a;
    scanf("%d",&t);
    
    while(t--)
    {
       
       scanf(" %d",&n);
       int count = 0;
       for(int i=0;i<n;i++)
        {
          scanf(" %c",&a);
          if(a == '0')
          count++;
        }
       printf("%d\n",count);
    }
    return 0;
}