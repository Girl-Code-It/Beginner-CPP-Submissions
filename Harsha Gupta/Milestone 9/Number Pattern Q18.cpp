#include<iostream>

using namespace std;
int main() {
  int i, j;
  for (i = 1; i <= 9; i = i + 2) {
    for (j = i; j <= 9; j = j + 2) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
