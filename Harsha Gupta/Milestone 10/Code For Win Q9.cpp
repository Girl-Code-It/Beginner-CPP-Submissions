#include<iostream>
#include<math.h>
using namespace std;

void perfect(int x, int y) {
  int sum = 0;
  for (int i = x; i <= y; i++) {
    for (int j = 1; j <= i / 2; j++) {
      if (i % j == 0) {
        sum += j;
      }
    }
    if (sum == i) {
      cout << i << " ";
    }
    sum = 0;
  }
}

int main() {
  int a, b;
  cout << "Enter the lower limit: ";
  cin >> a;
  cout << "\nEnter the upper limit:";
  cin >> b;
  cout << "\nPerfect numbers are: ";
  perfect(a, b);
  return 0;
}
