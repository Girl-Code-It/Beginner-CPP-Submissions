#include<iostream>
using namespace std;

int prime(int x, int y) {
  for (int i = x; i <= y; i++) {
    int Prime = 1;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        Prime = 0;
      }
    }
    if (Prime == 1) {
      cout << i << " ";
    }
  }
  return 0;
}

int main() {
  int a, b;
  cout << "Enter the lower limit: ";
  cin >> a;
  cout << "\nEnter the upper limit:";
  cin >> b;
  cout << "\nPrime numbers are: ";
  prime(a, b);
  return 0;
}
