#include<iostream>

#include<math.h>

using namespace std;

int main() {
  int n, p1, p2, p3, p4;
  cout << "\nEnter the size of array:";
  cin >> n;
  int a[n];
  cout << "\nEnter the elements of array:";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int max = abs(a[0] - a[1]);
  int min = abs(a[0] - a[1]);
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (max < abs(a[i] - a[j])) {
        max = abs(a[i] - a[j]);
        p1 = a[i];
        p2 = a[j];
      }
      if (min >= abs(a[i] - a[j])) {
        min = abs(a[i] - a[j]);
        p3 = a[i];
        p4 = a[j];
      }
    }
  }
  cout << "\nMaximum Difference Pair is (" << p1 << "," << p2 << ")";
  cout << "\nMinimum Difference Pair is (" << p3 << "," << p4 << ")";
  return 0;
}
