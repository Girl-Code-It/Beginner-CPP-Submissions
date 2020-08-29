#include<iostream>
using namespace std;

int diameter(int x) {
  cout << "\nThe diameter of circle is: " << 2 * x;
  return 0;
}

int area(int x) {
  cout << "\nThe diameter of circle is: " << 3.14 * x * x;
  return 0;
}

int circum(int x) {
  cout << "\nThe diameter of circle is: " << 2 * 3.14 * x;
  return 0;
}

int main() {
  int r;
  cout << "Enter the radius: ";
  cin >> r;
  diameter(r);
  area(r);
  circum(r);
  return 0;
}
