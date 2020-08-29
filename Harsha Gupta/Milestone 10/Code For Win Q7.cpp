#include<iostream>
using namespace std;

void strong(int x, int y) {
  int fact = 1, n, n1, sum = 0;
  for (int i = x; i <= y; i++) {
    n = i;
    while (n != 0) {
      n1 = n % 10;
      for (int j = 1; j <= n1; j++) {
        fact *= j;
      }
      sum += fact;
      n = n / 10;
      fact = 1;
    }
    if (sum == i)
      cout << i;
    else
      cout << "";
  }
}

int main() {
  int a, b;
  cout << "Enter the lower limit: ";
  cin >> a;
  cout << "\nEnter the upper limit:";
  cin >> b;
  cout << "\nStrong numbers are: ";
  strong(a, b);
  return 0;
}
