//Sort odd and even elements of array separately

#include <iostream>
#include <conio.h>
using namespace std;

void sort(int a[], int size) {
  int temp;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {
  int size, ch;
  cout << "Enter the size of array: ";
  cin >> size;
  int a[size];
  int e[size], o[size];
  int even = 0, odd = 0;
  cout << "\nEnter the elements of Array: ";
  for (int i = 0; i < size; i++) {
    cin >> a[i];
    if (a[i] % 2 == 0) {
      e[even] = a[i];
      even++;
    } else {
      o[odd] = a[i];
      odd++;
    }
  }
  sort(e, even);
  sort(o, odd);
  for (int i = 0; i < even; i++) {
    a[i] = e[i];
  }
  for (int i = even; i < even + odd; i++) {
    a[i] = o[i - even];
  }
  cout << "\nSorted array:";
  for (int i = 0; i < even + odd; i++) {
    cout << a[i] << "  ";
  }
  return 0;
}
