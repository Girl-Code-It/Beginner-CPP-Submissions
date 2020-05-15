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

  for(int i=str;i<end;i++)
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
        int *a = (int*)malloc(n*sizeof(int));
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
            
       QuickSort(a,0,n-1);

        int mis = 2;
        for(int i=0; i<n; i++)
        {
            if(a[i] >= mis)
                //Missing no will be increase by the factor 2
                mis += 2;

        }
        printf("%d\n",mis);
        free(a);
    }
    return 0;
}