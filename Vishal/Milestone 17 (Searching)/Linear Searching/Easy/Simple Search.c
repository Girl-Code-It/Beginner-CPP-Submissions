#include<stdio.h>

int main()
{
    int n,k;
    int a[10005];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);
    
    for(int i=0; i<n; i++)
    {
        if(a[i] == k)
        {
            printf("%d",i);
            break;
        }
    }
   return 0;
}