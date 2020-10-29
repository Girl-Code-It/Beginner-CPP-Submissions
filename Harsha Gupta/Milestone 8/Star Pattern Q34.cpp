#include<iostream>
using namespace std;

int main() {
  int k = 1, p;
  for (int i = 1; i <= 5; i++) {
    p = k;
    for (int j = 1; j <= i; j++) {
      cout << p;
      p -= (5 - i + j);
    }
    k = k + (6 - i);
    cout << endl;
  }
  return 0;
}
