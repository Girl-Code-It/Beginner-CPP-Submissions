#include<iostream>

using namespace std;

int main() {
  int i, j, k;
  for (i = 0; i <= 8; i++) {
    k = 1;
    for (j = 0; j <= 4; j++) {
      if (i < 5) {
        if (j >= 4 - i && j <= 4) {
          cout << k;
          k++;
        } else {
          cout << " ";
        }
      } else {
        if (j >= i - 4 && j <= 4) {
          cout << k;
          k++;
        } else {
          cout << " ";
        }
      }
    }
    cout << "\n";
  }
  return 0;
}
