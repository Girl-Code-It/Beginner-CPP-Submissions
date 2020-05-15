#include<stdio.h>

int main()
{
    int n,q,x;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
           if(i > 0)
           a[i] += a[i-1];
       }

    scanf("%d",&q);
    
    while(q--)
    {
       scanf("%d",&x);
       x  = a[n-1] - x + 1;
       int low = 0,high = n-1,mid;
       while(low <= high)
       {
         mid = low + (high - low)/2;
         if(a[mid] >= x && a[mid-1] < x)
         break;
         else if(a[mid] < x)
           low = mid + 1;
        else
          high = mid - 1;
          
       }
       if(mid%2 != 0)
       printf("B\n");
       else
       printf("A\n");  
    }
    
}