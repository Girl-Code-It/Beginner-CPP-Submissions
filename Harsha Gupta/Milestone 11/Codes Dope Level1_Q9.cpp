#include<iostream>
using namespace std;

int main() {
  int a[10];
  int b[5];
  int c[5];
  cout << "\nEnter the ten elements of array:";
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  cout << "\nThe two split arrays are as follows:\n";
  for (int i = 0; i < 5; i++) {
    b[i] = a[i];
    cout << b[i] << "	";
  }
  cout << endl;
  for (int i = 0; i < 5; i++) {
    c[i] = a[9 - i];
    cout << c[i] << "	";
  }
  return 0;
}
