#include<iostream>
using namespace std;

int main() {
  int a[10];
  cout << "\nEnter 10 numbers:";
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  cout << "Numbers are:\n";
  for (int i = 0; i < 10; i++) {
    cout << a[i] << "\n";
  }
  return 0;
}
