#include<stdio.h>

//Here we insert an element from unsorted part 
//of the array to sorted part
//initially 0th index is sorted and rest is unsorted part
//we run this program until unsorted part become zero

void InsertionSort(int *a,int n)
{
    for(int i=1; i<n; i++)
    {
      //var store the ith value of the array 
      //and put this in sorted part 
      int var = a[i],hole = i;
   
      while(hole > 0 && a[hole-1] > var)
       {
          a[hole] = a[hole - 1];
          hole--;
       }
       //place the value of a[i] in sorted part of the array
       a[hole] = var;
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

    InsertionSort(a,n);
    printf("\nSorted array....\n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}