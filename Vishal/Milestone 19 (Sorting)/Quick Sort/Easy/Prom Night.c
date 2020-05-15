#include<stdio.h>
#include<stdlib.h>

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
    int t,n,m;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&m,&n);
        int *boy = (int*)malloc(m*sizeof(int));
        int *girl = (int*)malloc(n*sizeof(int));
        for(int i=0; i<m; i++)
            scanf("%d",&boy[i]);

        for(int i=0; i<n; i++)
            scanf("%d",&girl[i]);

        if(m > n)
            printf("NO\n");
        else
        {
           QuickSort(boy,0,m-1);
           QuickSort(girl,0,n-1);
        
           int i=0,j=0;
           while(i < m && j < n)
           {
              if(boy[i] > girl[j])
               {
                  i++;
                  j++;
               }
              else if(boy[i] <= girl[j])
              break;
           }
           if(i == m)
           printf("YES\n");
           else
           printf("NO\n");
        }
        free(boy);
        free(girl);
    }
}