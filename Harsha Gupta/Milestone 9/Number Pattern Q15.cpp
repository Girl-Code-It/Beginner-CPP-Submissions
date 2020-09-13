#include<iostream>
using namespace std;

int main() {
  int i, j, k;
  for (i = 5; i >= 1; i--) {
    k = i;
    for (j = 1; j <= 5; j++) {
      if (k <= 5) {
        cout << k;
      } else {
        cout << "5";
      }
      k++;
    }
    cout << endl;
  }
  return 0;
}
