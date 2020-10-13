#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int Partition(char *a, int start, int end)
{
   char pivot = a[end];
   int pindex = start;
   for (int i = start; i < end; i++)
   {
      if (a[i] >= pivot)
      {
         char temp = a[i];
         a[i] = a[pindex];
         a[pindex] = temp;
         pindex++;
      }
   }
   char temp = a[pindex];
   a[pindex] = a[end];
   a[end] = temp;
   //returning partition index
   return pindex;
}
//Recursive Function to Sort array
void QuickSort(char *a, int start, int end)
{
   if (start < end)
   {
      //calling partition fxn to get the partition index
      int pindex = Partition(a, start, end);
      //Recursive call to sort the elements in the left of partition  index and in the right of partition index
      QuickSort(a, start, pindex - 1);
      QuickSort(a, pindex + 1, end);
   }
}
int main()
{
   int t, i;
   cin >> t;
   char a[1001];
   while (t--)
   {
      cin >> a;
      QuickSort(a, 0, strlen(a) - 1);
      char b[strlen(a)];
      int mid = strlen(a) / 2;
      int low = mid - 1;
      int high = mid + 1;
      int p = 0;
      b[mid] = a[p++];
      while (high < strlen(a) && low >= 0)
      {
         b[high++] = a[p++];
         b[low--] = a[p++];
      }
      for (i = 0; i < strlen(a); i++)
      {
         cout << b[i];
      }
      cout << endl;
   }
}
