#include<iostream>

using namespace std;
int main() {
  int k = 1, h, l = 3;
  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 9; j++) {
      if (j >= 1 && j <= k) {
        if (j % 2 == 0) {
          cout << "*";
        } else {
          if (i % 2 == 0) {
            cout << l;
            l--;
          } else {
            cout << h;
          }
          h++;
        }
      } else {
        cout << " ";
      }
    }
    if (i % 2 == 0) {
      l = l + 9;
    }
    k = k + 2;
    cout << "\n";
  }
  return 0;
}
