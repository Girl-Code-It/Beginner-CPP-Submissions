#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 5; i >= 1; i--) {
    if (i % 2 != 0) {
      for (j = 1; j <= i; j++) {
        cout << j;
      }
    } else {
      for (j = i; j >= 1; j--) {
        cout << j;
      }
    }
  cout << endl;
 }
 return 0;
}
