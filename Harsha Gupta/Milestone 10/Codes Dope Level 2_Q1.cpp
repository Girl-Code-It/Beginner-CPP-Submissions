#include<iostream>
using namespace std;

int table(int x) {
  for (int i = 1; i <= x; i++) {
    cout << "15 X " << i << " = " << 15 * i << endl;
  }
}

int main() {
  int no;
  cout << "Enter the number upto which you want to print the table of 15: ";
  cin >> no;
  table(no);
}
