#include<stdio.h>

int main()
{
    int n,q,c;
    scanf("%d",&n);
    int a[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(i>1)
            a[i] += a[i-1];
    }

    scanf("%d",&q);
    
    while(q--)
    {
        scanf("%d",&c);
        int low = 1,high = n,mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            
            if(a[mid] >= c && a[mid-1] < c)
            break;
            else if(a[mid] < c)
            low = mid + 1;
            else
            high = mid - 1;
        }
        printf("%d\n",mid);    
    }
    return 0;
}