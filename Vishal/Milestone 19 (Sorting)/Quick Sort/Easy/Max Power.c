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
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int a[n],min = 10e9,max = 0,k,k1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i] > max)
            {
                max = a[i];
                k = i;
            }

            if(a[i] < min)
            {
                min = a[i];
                k1 = i;
            }
        }

        QuickSort(a,0,n-1);
        
        if(k == 0 && k1 == n-1 && n != 2)
        {
          if(a[n-1]-a[1] > a[n-2] - a[0])
          printf("%d\n",a[n-1]-a[1]);
          else
          printf("%d\n",a[n-2]-a[0]);
        }
        else
        printf("%d\n",max-min);
    }
}