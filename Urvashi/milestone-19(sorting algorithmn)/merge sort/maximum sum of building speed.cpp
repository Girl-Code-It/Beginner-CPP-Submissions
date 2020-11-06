#include <bits/stdc++.h>
using namespace std;

void Merge(long long *Left, long long *Right, long long *a, int nL, int nR)
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

   //if There is no element remaining in the Right array
   while (i < nL)
   {
      a[k] = Left[i];
      i++;
      k++;
   }

   //if There is no element remaining in the Left array
   while (j < nR)
   {
      a[k] = Right[j];
      j++;
      k++;
   }
}

//Recursive Function to Sort array
void MergeSort(long long *a, long long n)
{
   //Base case
   //if length of the array is less than 2
   //then it is already sorted
   if (n < 2)
      return;

   //To divide an array into two part
   int mid = n / 2;

   //Two array to store element
   long long Left[mid], Right[n - mid];

   //Initialize the array
   for (int i = 0; i < mid; i++)
      Left[i] = a[i];

   for (int i = mid; i < n; i++)
      Right[i - mid] = a[i];

   //Recursive call
   MergeSort(Left, mid);
   MergeSort(Right, n - mid);

   //After sorting merge array
   Merge(Left, Right, a, mid, n - mid);
}
int main()
{
   long long n;
   cin >> n;
   long long a[2 * n];
   int k = 2 * n;
   for (int i = 0; i < k; i++)
   {
      cin >> a[i];
   }
   MergeSort(a, k - 1);
   long long sum = 0;
   for (int i = 0; i < k; i = i + 2)
   {
      sum += a[i];
   }
   cout << sum << endl;
}
