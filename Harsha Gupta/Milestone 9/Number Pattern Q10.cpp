#include<iostream>
using namespace std;

int main() {
  int i, j;
  for (i = 5; i >= 1; i--) {
    for (j = 5; j >=i; j--) {
      cout << i;
    }
    cout << endl;
  }
  return 0;
}
