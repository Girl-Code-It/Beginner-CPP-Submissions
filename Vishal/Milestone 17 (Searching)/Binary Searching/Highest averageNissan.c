#include<stdio.h>

int com(void const*a,void const*b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n,q,s;
    scanf("%d",&n);

    int a[n];
    unsigned long long sum[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    qsort(a,n,4,com);

    sum[0] = a[0];
    for(int i=1; i<n; i++)
        sum[i] = sum[i-1] + a[i];

    scanf("%d",&q);

    while(q--)
    {
        scanf("%d",&s);
        int low = 0,high = n-1,mid,ans = 0;

        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(sum[mid]/(mid+1) < s)
            {
                ans = mid + 1;
                low  = mid + 1;
            }
            else if(sum[mid]/(mid+1) >= s)
                high = mid - 1;
        }
        printf("%d\n",ans);
    }
    return 0;
}