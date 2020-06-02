#include<stdio.h>

//Swapping occur
void Swap(int *x,int *y)
{
   int z = *x;
      *x = *y; 
      *y = z;
}

int Partition(int *a,int str,int end)
{
  //rightmost value of the segment
  int pivot = a[end];
  int pIndex = str ;

  //divide the segment in two part
  //element before pivot are smaller than pivot
  //element after pivot is greater than pivot
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
       //Calling Partition
        int pivot = Partition(a,str,end);
       
       //Recursive Call
        QuickSort(a,str,pivot-1);
        QuickSort(a,pivot+1,end);
    }
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the element for sorting\n");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    QuickSort(a,0,n-1);
    printf("\nSorted array....\n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);

    return 0;
}