#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 1; i <= 5; i++) {
    for (j = i; j <= 5; j++) {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}
