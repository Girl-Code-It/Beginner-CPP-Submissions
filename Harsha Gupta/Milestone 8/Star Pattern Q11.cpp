#include<iostream>

using namespace std;

int main() {
  int v, k = 2;
  for (int i = 1; i <= 7; i++) {
    for (int j = 1; j <= 7; j++) {
      if (i <= 4) {
        if (j<=i)
          cout << "*";
        else
          cout << " ";
      } else {
        v = i - k;
        if (j<=v)
          cout << "*";
        else
          cout << " ";
      }
    }
    if (i >= 5)
      k = k + 2;
    cout << "\n";
  }
  return 0;
}
