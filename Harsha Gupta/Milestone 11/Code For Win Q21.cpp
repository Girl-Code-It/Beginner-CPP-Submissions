//Left rotation of Array

#include <iostream>
#include <conio.h>
using namespace std;

void rotate(int a[], int n) {
  int val = a[0];
  for (int i = 0; i < n; i++) {
    a[i] = a[i + 1];
  }
  a[n - 1] = val;
}

int main() {
  int size, freq;
  cout << "Enter the size of Array: ";
  cin >> size;
  int a[size];
  cout << "\nEnter the elements of Array: ";
  for (int i = 0; i < size; i++) {
    cin >> a[i];
  }
  cout << "\nEnter the no. of times the rotation must occur: ";
  cin >> freq;
  while (freq != 0) {
    rotate(a, size);
    freq--;
  }
  cout << "\nRotated Array: ";
  for (int i = 0; i < size; i++) {
    cout << a[i] << "  ";
  }
  return 0;
}
