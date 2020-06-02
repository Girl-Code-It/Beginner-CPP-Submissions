#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int d,a,m,b,x,month,rem;
        scanf("%d %d %d %d %d",&d,&a,&m,&b,&x);
              
        month = (x - d)/(m*a + b)*(m+1);
        
        rem = (x - d)%(m*a + b);
        
        month += rem/a;
        
        if(rem%a != 0)
            month += 1;
            
       printf("%d\n",month);
    }
    return 0;
}