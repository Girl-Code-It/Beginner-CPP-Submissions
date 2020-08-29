#include<iostream>
using namespace std;

int max(int x, int y, int z) {
  if (x > y && x > z)
    return x;
  else if (y > x && y > z)
    return y;
  else
    return z;
}

int min(int x, int y, int z) {
  if (x < y && x < z)
    return x;
  else if (y < x && y < z)
    return y;
  else
    return z;
}

int main() {
  int a, b, c;
  cout << "\n Enter three numbers:";
  cin >> a >> b >> c;
  cout << "\n Largest number:" << max(a, b, c);
  cout << "\n Smallest number:" << min(a, b, c);
  return 0;
}
