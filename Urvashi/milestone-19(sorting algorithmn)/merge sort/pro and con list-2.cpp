#include <stdio.h>

void Merge(int *Left, int *Right, int *a, int nL, int nR)
{
   int i = 0, j = 0, k = 0;

   while (i < nL && j < nR)
   {
      if (Left[i] <= Right[j])
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

   while (i < nL)
   {
      a[k] = Left[i];
      i++;
      k++;
   }

   while (j < nR)
   {
      a[k] = Right[j];
      j++;
      k++;
   }
}

void MergeSort(int *a, int n)
{
   if (n < 2)
      return;

   int mid = n / 2;

   int Left[mid], Right[n - mid];

   for (int i = 0; i < mid; i++)
      Left[i] = a[i];

   for (int i = mid; i < n; i++)
      Right[i - mid] = a[i];

   MergeSort(Left, mid);
   MergeSort(Right, n - mid);

   Merge(Left, Right, a, mid, n - mid);
}

int main()
{
   int n, t;
   scanf("%d", &t);

   while (t--)
   {
      scanf("%d", &n);
      int happy[n];
      long long anger = 0;
      for (int i = 0; i < n; i++)
      {
         int x, y;
         scanf("%d %d", &x, &y);
         happy[i] = x + y;

         anger += y;
      }
      MergeSort(happy, n);
      printf("%lld\n", happy[n - 1] + happy[n - 2] - anger);
   }
   return 0;
}
