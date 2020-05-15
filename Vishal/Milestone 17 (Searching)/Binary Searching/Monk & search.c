#include<stdio.h>

int com(void const*a,void const*b)
{
    return (*(int*)a - *(int*)b);
}

int bin_search(int n,int k,int *a)
{
    int low = 0,high = n-1,mid,f = -1;

    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(a[mid] > k)
        {
            f = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return f;
}
int main()
{
    int n,q,s,l,k;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    qsort(a,n,4,com);

    scanf("%d",&q);

    while(q--)
    {
        scanf("%d %d",&s,&l);
        if(s == 0)
        {
            k = bin_search(n,l-1,a);
            if(k == -1)
                k = n;
            printf("%d\n",n-1 - k+1);
        }
        else
        {
            k = bin_search(n,l,a);
            if(k == -1)
                k = n;
            printf("%d\n",n-1 - k+1);
        }
    }
    return 0;
}