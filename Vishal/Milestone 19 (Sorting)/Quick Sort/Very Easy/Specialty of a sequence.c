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
   int n,k,sum = 0;
   scanf("%d %d",&n,&k);
   int a[n];
   for(int i=0;i<n;i++)
   scanf("%d",&a[i]);

   QuickSort(a,0,n-1);

   for(int i=0;i<n-k;i++)
    sum += a[i];
    
   printf("%d\n",sum);
}