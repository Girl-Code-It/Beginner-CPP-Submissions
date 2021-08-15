#include<stdio.h>
int main()
{
    int a,b,n,count=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&a,&b);
        double r = (a>b) ? (double)a/b : (double)b/a;
            
        if(r>=1.6&&r<=1.7)
            count++;
    }
    printf("%d",count);
}