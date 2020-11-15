#include <iostream>
using namespace std;

int Partition(int *a, int start, int end)
{
  int pivot = a[end];
  int pindex = start;
  for (int i = start; i < end; i++)
  {
    if (a[i] < pivot)
    {
      int temp = a[i];
      a[i] = a[pindex];
      a[pindex] = temp;
      pindex++;
    }
  }
  int temp = a[pindex];
  a[pindex] = a[end];
  a[end] = temp;
  //returning partition index
  return pindex;
}
//Recursive Function to Sort array
void QuickSort(int *a, int start, int end)
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
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    QuickSort(a, 0, n - 1);
    long ans = 2, k = 2;
    for (int i = 0; i < n; i++)
    {
      if (a[i] >= ans)
      {
        ans = 2 * (k++);
      }
    }
    cout << ans << endl;
  }
}
