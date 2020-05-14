#include<stdio.h>

int com(void const*a,void const*b)
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

    qsort(a,n,4,com);
    
    for(int i=1; i<n; i++)
        a[i] += a[i-1];

    int low = 0,high = n-1,mid,f = 0;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(a[mid] + a[mid-1] == a[n-1] || 2*a[mid] == a[n-1])
        {
            f = 1;
            break;
        }
        else if(a[mid] + a[mid-1] < a[n-1] || 2*a[mid] < a[n-1])
            low  = mid + 1;
        else
            high = mid - 1;
    }
    if(f == 1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}