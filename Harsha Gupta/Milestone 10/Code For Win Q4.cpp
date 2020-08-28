#include<iostream>
using namespace std;

int check(int x) {
  if (x % 2 == 0) {
    cout << "Even Number";
  } else {
    cout << "Odd Number";
  }
}

int main() {
  int no;
  cout << "Enter the number: ";
  cin >> no;
  check(no);
  return 0;
}
