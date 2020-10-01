#include<iostream>
using namespace std;

int power(int a, int b) {
  int ans = 1;
  for (int i = 1; i <= b; i++) {
    ans = ans * a;
  }
  return ans;
}

int main() {
  int a, b;
  cout << "Enter base: ";
  cin >> a;
  cout << "\n Enter the power: ";
  cin >> b;
  cout << "\n Answer: " << power(a, b);
}
