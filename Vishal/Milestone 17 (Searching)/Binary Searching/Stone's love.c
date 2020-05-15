#include<stdio.h>

int main()
{
    int n,q,x;
    scanf("%d %d",&n,&q);

    long int sum[n];
    int a[n];

    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    
    sum[0] = a[0];
    for(int i=1; i<n; i++)
        sum[i] = sum[i-1] + a[i];
    while(q--)
    {
        scanf("%d",&x);
        int l = 0,r = n-1,m;

        while (l <= r)
        {
            m = (r+l)/2;
            if (sum[m] >= x && sum[m-1] < x)
                break;
            if (sum[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }

        printf("%d\n",m+1);
    }
    return 0;
}