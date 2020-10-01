#include<iostream>
using namespace std;

int prod(int x, int y) {
  return x*y;
}

int main() {
  int a, b;
  cout << "\n Enter two numbers:";
  cin >> a >> b;
  cout << "\n Product:" << prod(a, b);
  return 0;
}
