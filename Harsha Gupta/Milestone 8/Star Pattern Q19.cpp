#include<iostream>

using namespace std;
int main() {
  int k = 0;
  for (int i = 1; i <= 4; i++) {
    k = 1;
    for (int j = 1; j <= 7; j++) {
      if (j >= 5 - i && j <= 3 + i) {
        cout << (char)(64 + k);
        if (j < 4) {
          k++;
        } else {
          k--;
        }
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
