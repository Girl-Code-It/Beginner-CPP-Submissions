#include<stdio.h>

int subsetSum(int *a,int l,int r,int sum)
{
    if(l > r)
    {
        printf("%d ",sum);
        return 0;
    }
    //Subset having element a[l]
    subsetSum(a,l+1,r,sum+a[l]);
    //subset excluding element a[l]
    subsetSum(a,l+1,r,sum);
}

int main()
{
    int t,n;
    scanf("%d",&t);
    int a[10];
    while(t--)
    {
        scanf("%d",&n);

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        subsetSum(a,0,n-1,0);
        
        printf("\n");
    }
    return 0;
}