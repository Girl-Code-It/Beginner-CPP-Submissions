#include<stdio.h>

void Merge(int *Left,int *Right,int *a,int nL,int nR)
{
   int i=0,j=0,k=0;

   while(i < nL && j < nR)
    {
       if(Left[i] >= Right[j])
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
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],max = 0,count = 1;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);

        MergeSort(a,n);
        
        for(int i=0;i<n;i++)
          {
             if(a[i] == a[i+1])
              count++;
            else
            {
              if(count > max)
               max = count;
               count = 1;
            }
          }
        printf("%d\n",max);
    }
    return 0;
}