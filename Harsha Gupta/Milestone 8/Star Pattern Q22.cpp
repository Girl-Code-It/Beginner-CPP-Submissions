#include<iostream>

using namespace std;
int main() {
  int k, h;
  for (int i = 1; i <= 4; i++) {
    k = 1;
    h = 1;
    for (int j = 1; j <= 7; j++) {
      if (j >= 5 - i && j <= 3 + i) {
        if (j <= 4) {
          cout << k;
          k++;
        } else {
          cout << (char)(64 + h);
          h++;
        }
      } else {
        cout <<" ";
      }
    }
    cout << "\n";
  }
  return 0;
}
