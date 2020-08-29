#include <iostream>
#include <math.h>
using namespace std;

void armstrong(int x, int y) {
  int num, digit, i = 1, count = 0, num1;
  for (i = x; i <= y; i++) {
    num = i;
    while (num > 0) {
      num = num / 10;
      count++;
    }
    num1 = i;
    int sum = 0;
    while (num1 > 0) {
      digit = num1 % 10;
      sum += pow(digit, count);
      num1 = num1 / 10;
    }
    if (sum == i)
      cout << i << " " << endl;
    count = 0;
  }
}

int main() {
  int a, b;
  cout << "Enter the lower limit : ";
  cin >> a;
  cout << "\nEnter the upper limit : ";
  cin >> b;
  cout << "\nArmstrong numbers are:\n";
  armstrong(a, b);
  return 0;
}
