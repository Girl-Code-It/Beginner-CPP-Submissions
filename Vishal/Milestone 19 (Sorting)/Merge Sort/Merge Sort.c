#include<stdio.h>

void Merge(int *Left,int *Right,int *a,int nL,int nR)
{
   int i=0,j=0,k=0;

   while(i < nL && j < nR)
    {
       if(Left[i] <= Right[j])
        {
           a[k] = Left[i];
           i++;
        }
       else
        {
           a[k] = Right[j];
           j++;
        }
        k++;
    }
    
    //if There is no element remaining in the Right array
    while(i < nL)
     {
        a[k] = Left[i];
        i++;
        k++;
     }
    
    //if There is no element remaining in the Left array
    while(j < nR)
     {
        a[k] = Right[j];
        j++;
        k++;
     }
}

//Recursive Function to Sort array 
void MergeSort(int *a,int n)
{
   //Base case
   //if length of the array is less than 2
   //then it is already sorted
   if(n < 2)
   return;

   //To divide an array into two part
   int mid = n/2;
  
   //Two array to store element 
   int Left[mid],Right[n-mid];

   //Initialize the array
   for(int i=0;i<mid;i++)
      Left[i] = a[i];
    
    for(int i=mid;i<n;i++)
      Right[i-mid] = a[i];

   //Recursive call 
   MergeSort(Left,mid);
   MergeSort(Right,n-mid);

   //After sorting merge array
   Merge(Left,Right,a,mid,n-mid);
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

    MergeSort(a,n);
    printf("\nSorted array....\n");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
        
    return 0;
}