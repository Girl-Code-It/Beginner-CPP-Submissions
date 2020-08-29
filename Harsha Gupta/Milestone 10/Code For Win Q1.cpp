#include<iostream>
using namespace std;

int cube(int x) {
  return (x * x * x);
}

int main() {
  int no;
  cout << "Enter the number: ";
  cin >> no;
  cout << "\nThe cube of the number is: " << cube(no);
  return 0;
}
