#include<iostream>
using namespace std;

int main() {
  int l, m = 1;
  char k;
  for (int i = 1; i <= 4; i++) {
    l = 1;
    k = 'A';
    for (int j = 1; j <= 7; j++) {
      if (j >= 5 - i && j <= 3 + i && m == 1) {
        if (i % 2 != 0) {
          cout << l;
          l++;
          m = 0;
        } else if (i % 2 == 0) {
          cout << k;
          k++;
          m = 0;
        }
      } else {
        cout << " ";
        m = 1;
      }
    }
    cout << endl;
  }
  return 0;
}
