#include <stdio.h>

int main() 
{
    int t,n,k,p,temp,count,i;
    scanf("%d",&t);
    while(t--) 
    {
        scanf("%d %d %d",&n,&k,&p);
        for(i=0; i<k; i++)
        {
            scanf("%d",&temp);
            if(temp <= p)
                p++;

        }
        if(p <= n)
            printf("%d\n",p);
        else
            printf("-1\n");

    }
}