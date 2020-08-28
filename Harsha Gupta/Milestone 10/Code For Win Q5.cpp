#include<iostream>
#include<math.h>
using namespace std;

int prime(int x) {
  if (x == 1) {
    cout << "Neither Prime nor Composite Number" << endl;
  } else {
    int Prime = 0;
    for (int i = 2; i <= x / 2; i++) {
      if (x % i == 0) {
        Prime = 1;
      }
    }
    if (Prime == 0) {
      cout << "Prime Number" << endl;
    } else {
      cout << "Not Prime" << endl;
    }
  }
}

int armstrong(int x) {
  int dig, i = 0, num, a, sum = 0;
  num = x;
  a = x;
  while (num != 0) {
    dig = num % 10;
    num = num / 10;
    i++;
  }
  while (x != 0) {
    dig = x % 10;
    sum = sum + pow(dig, i);
    x = x / 10;
  }
  if (sum == a) {
    cout << "Armstrong Number" << endl;
  } else {
    cout << "Not an Armstrong Number" << endl;
  }
}

int perfect(int x) {
  int sum = 0;
  for (int i = 1; i <= x / 2; i++) {
    if (x % i == 0) {
      sum = sum + i;
    } else {}
  }
  if (sum == x) {
    cout << "Perfect number" << endl;
  } else {
    cout << "Not Perfect" << endl;
  }
}
main() {
  int a;
  cout << "Enter the number: ";
  cin >> a;
  prime(a);
  armstrong(a);
  perfect(a);
}
