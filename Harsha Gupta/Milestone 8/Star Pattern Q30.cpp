#include<iostream>
using namespace std;
int main() {
  int col=5, k=3;
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 5; j++) {
      if (i <= 3) {
        if (j >= 6 - i )
          cout << "*";
        else
          cout << " ";
      } else if (i >= 4 && i <= 6) {
        if (j == 3) {
          cout << "|";
        } else if ((j <= i - 4 && i >= 5) || (j >= i && i <= 5)) {
          cout << "*";
        } else {
          cout << " ";
        }
      } else if (i > 6) {
        if (j <= k)
          cout << "*";
        else
          cout << " ";
      }
    }
    cout << endl;
    i < 7 ? k = 3 : k--;
  }

  return 0;
}
