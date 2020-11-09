#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "\nEnter the size of array:";
  cin >> n;
  int a[n];
  cout << "\nEnter the elements of array:";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int b[n + 1];
  int highest = a[0];
  int second_highest = a[0];
  int j = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > highest) {
      highest = a[i];
      j = i;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] < highest && a[i] > second_highest) {
      second_highest = a[i];
    }
  }

  for (int i = 0; i < j; i++) {
    b[i] = a[i];
  }
  b[j] = second_highest;
  b[j + 1] = highest - second_highest;

  for (int i = j + 2; i <= n; i++) {
    b[i] = a[i - 1];
  }
  cout << "\nArray after splitting: ";
  for (int i = 0; i <= n; i++) {
    cout << b[i] << "  ";
  }
  return 0;
}
