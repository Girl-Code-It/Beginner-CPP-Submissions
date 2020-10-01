#include<iostream>
using namespace std;

int sum(int x, int y) {
  return x + y;
}

int main() {
  int a, b;
  cout << "\n Enter two numbers:";
  cin >> a >> b;
  cout << "\n Sum:" << sum(a, b);
  return 0;
}
