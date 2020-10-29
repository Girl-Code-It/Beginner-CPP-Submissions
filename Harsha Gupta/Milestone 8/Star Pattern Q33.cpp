#include<iostream>
using namespace std;

int main() {
  char k;
  for (int i = 1; i <= 4; i++) {
    k = 'A';
    for (int j = 1; j <= 7; j++) {
      if (j >= 6 - i && j < 3 + i) {
        cout << " ";
      } else {
        cout << k;
      }
      k++;
    }
    cout << endl;
  }
  return 0;
}
