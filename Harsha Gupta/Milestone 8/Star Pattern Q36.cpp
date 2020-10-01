#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 0; i <= 4; i++) {
    int p = 0;
    for (j = 0; j <= i; j++) {
      cout << i * p;
      p++;
    }
    cout << "\n";
  }
  return 0;
}
