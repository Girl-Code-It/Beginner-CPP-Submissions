#include<stdio.h>

int com(void const*a,void const*b)
{
   return (*(int*)a - *(int*)b);
}
int main()
{
    int n,q,x;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
    qsort(a,n,4,com);

    while(q--)
    {
        scanf("%d",&x);
        int low = 0,high = n-1,mid,f = 0;

        while(low <= high)
        {
            mid = low + (high - low)/2;

            if(a[mid] == x)
            {
                f = 1;
                break;
            }
            else if(a[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        if(f == 1)
        printf("YES\n");
        else
        printf("NO\n");
    }

  return 0;
}