#include<stdio.h>

int Sort(void const*a,void const*b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    qsort(a,n,sizeof(int),Sort);

    long long ans = 0,count = 1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] == a[i+1])
            count++;
        else
        {
            ans += count*(count-1)/2;
            count = 1;
        }
    }
     printf("%lld\n",ans);
}