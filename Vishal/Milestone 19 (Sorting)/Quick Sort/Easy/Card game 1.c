#include<stdio.h>

void Swap(int *x,int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int Partition(int *a,int str,int end)
{
    int pivot = a[end];
    int pIndex = str ;

    for(int i=str; i<end; i++)
    {
        if(a[i] <= pivot)
        {
            Swap(&a[i],&a[pIndex]);
            pIndex++;
        }
    }
    Swap(&a[pIndex],&a[end]);
    return pIndex;
}

void QuickSort(int *a,int str,int end)
{
    if(str < end)
    {
        int pivot = Partition(a,str,end);

        QuickSort(a,str,pivot-1);
        QuickSort(a,pivot+1,end);
    }
}
int main()
{
    int n,m,max = 0;
    scanf("%d",&n);
    
    int first[n],second;
    for(int i=0;i<n;i++)
      scanf("%d",&first[i]);
    
    scanf("%d",&m);
    for(int i=0;i<m;i++)
      {
        scanf("%d",&second);
        if(second > max)
        max = second;
       }
    
    
    QuickSort(first,0,n-1);
    
    
    unsigned long long dollar = 0;
    
    for(int i=0;i<n;i++)
    {
      if(first[i] <= max)
       dollar += max - first[i] + 1;
    }
    
    printf("%llu\n",dollar);
    return 0;
}
