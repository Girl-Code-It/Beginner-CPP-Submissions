#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 5; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
