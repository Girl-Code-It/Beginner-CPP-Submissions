#include<iostream>
using namespace std;

int main() {
  int k = 1;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (i >= 2 && i <= 8) {
        if (j >= 7 - k && j <= 3 + k) {
          cout << " ";
        } else {
          cout << "*";
        }
      } else {
        cout << "*";
      }
    }
    if (i < 5) {
      k++;
    } else {
      k--;
    }
    cout << "\n";
  }
  return 0;
}
