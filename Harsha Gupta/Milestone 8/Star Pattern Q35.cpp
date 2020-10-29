#include<iostream>

using namespace std;
int main() {
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 7; j++) {
      if (j >= 5 - i && j <= 3 + i) {
        if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0) {
          cout << " ";
        } else {
          if (i % 2 == 0) {
            cout << "*";
          } else {
            cout << "*";
          }
        }
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
