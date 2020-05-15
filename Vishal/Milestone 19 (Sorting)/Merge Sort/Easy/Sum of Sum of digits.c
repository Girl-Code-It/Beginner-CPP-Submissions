#include <stdio.h>

int cmpfunc (const void * a, const void * b)
{
    return ( *(long long*)a - *(long long*)b );
}

int cmpfunc1 (const void * a, const void * b)
{
    return -( *(int*)a - *(int*)b );
}

int main()
{
    int n,q,i,k,t;
    scanf("%d %d",&n,&q);
    long long a[n];
    int b[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        a[i] = a[i]%9 == 0 ? 9 : a[i]%9;
        b[i] = a[i];
    }
    qsort(a, n, sizeof(long long), cmpfunc);
    qsort(b, n, sizeof(int), cmpfunc1);
    for(i=1; i<n; i++)
    {
        a[i] = a[i-1] +a[i];
        b[i] = b[i-1] +b[i];
    }
    while(q--)
    {
        scanf("%d %d",&t,&k);
        if(t == 1)
            printf("%d\n",b[k-1]);

        else
            printf("%lld\n",a[k-1]);

    }
    return 0;
}