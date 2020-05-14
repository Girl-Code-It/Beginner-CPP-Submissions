#include<stdio.h>
 
int main()
{
    int t,n,sam;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&sam);
        int Height,small= 0,tall = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&Height);
            if(Height < sam)
                small++;
            else
                tall++;
        }
        printf("%d\n",abs(tall - small));
    }
    return 0;
}