#include<stdio.h>

int main()
{
    int n,k,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        int a,min = k;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a < min)
                min = a;
        }
        printf("%d\n",k-min);
    }
}