#include<stdio.h>

int com(void const*a,void const*b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int n,Q,pow;
    scanf("%d",&n);
    int a[n],sum[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    qsort(a,n,sizeof(int),com);

    /*for(int i=0;i<n;i++)
         printf("%d ",a[i]);*/

    sum[0] = a[0];
    for(int i=1; i<n; i++)
        sum[i] = sum[i-1] + a[i];

    /*printf("\n");
      for(int i=0;i<n;i++)
         printf("%d ",sum[i]);*/

    scanf("%d",&Q);
    while(Q--)
    {
        scanf("%d",&pow);
        int low = 0,high = n-1,mid;

        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(a[mid] == pow)
             {
               if(a[mid + 1] == pow)
                low = mid + 1;
               else
                break;
            }
            else if(a[mid] > pow)
                high = mid - 1;
            else
                low = mid + 1;
        }
        printf("%d %d\n",mid+1,sum[mid]);
    }
   return 0;
}