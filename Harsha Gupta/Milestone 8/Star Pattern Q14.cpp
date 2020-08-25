#include<iostream>
using namespace std;

int main() {
  int i, k;
  for (i = 0; i <= 6; i++) {
    for (k = 6 - i; k >= 0; k--) {
      cout << k;
    }
    cout << endl;
  }
  return 0;
}
