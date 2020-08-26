#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= i; j++) {
      if (i % 2 != 0)
        cout << 2 * j - 1;
      else
        cout << j * 2;
    }
    cout << endl;
  }
  return 0;
}
