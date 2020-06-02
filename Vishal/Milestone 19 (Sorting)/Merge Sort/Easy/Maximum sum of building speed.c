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
    
    while(i < nL)
     {
        a[k] = Left[i];
        i++;
        k++;
     }
    
    while(j < nR)
     {
        a[k] = Right[j];
        j++;
        k++;
     }
}

void MergeSort(int *a,int n)
{
   if(n < 2)
   return;

   int mid = n/2;
  
   int Left[mid],Right[n-mid];

   for(int i=0;i<mid;i++)
      Left[i] = a[i];
    
    for(int i=mid;i<n;i++)
      Right[i-mid] = a[i];

   MergeSort(Left,mid);
   MergeSort(Right,n-mid);

   Merge(Left,Right,a,mid,n-mid);
}

int main()
{
  int n;
  scanf("%d",&n);
  int a[n*2],sum = 0;

  for(int i=0;i<2*n;i++)
    scanf("%d",&a[i]);
  MergeSort(a,2*n);

   for(int i=0;i<2*n;i += 2)
    sum += a[i];
    
    printf("%d\n",sum);
}