#include<iostream>
using namespace std;

void perfect(int x) {
  int sum;
  for (int i = 1; i <= x / 2; i++) {
    if (x % i == 0)
      sum += i;
  }
  if (sum == x)
    cout << x << " is a perfect number.\n";
  else
    cout << x << " is not a perfect number.\n";
}

int main() {
  int no;
  cout << "\n Enter the number:";
  cin >> no;
  perfect(no);
  cout << "--------------------------------------------\n\n";
  cout << "Perfect numbers between 1 and 100 are: \n";
  for (int i = 1; i <= 1000; i++) {
    perfect(i);
  }
  return 0;
}
