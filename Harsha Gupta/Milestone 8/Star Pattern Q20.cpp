#include<iostream>
using namespace std;

int main() {
  int k = 0, h = 0;
  for (int i = 1; i <= 4; i++) {
    k = 1;
    h = 1;
    for (int j = 1; j <= 8; j++) {
      if (j >= 5 - i && j <= 4 + i) {
        if (j < 5) {
          cout << (char)(64 + k);
          k++;
        } else {
          cout << h;
          h++;
        }
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
