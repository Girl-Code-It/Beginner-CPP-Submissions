#include<iostream>
using namespace std;

void factors(int x) {
  cout << "\n Factors of the number: ";
  for (int i = 1; i <= x / 2; i++) {
    if (x % i == 0)
      cout << i << "  ";
  }
}

int main() {
  int no;
  cout << "\n Enter the number:";
  cin >> no;
  factors(no);
  return 0;
}
