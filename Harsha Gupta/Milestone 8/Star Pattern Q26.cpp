#include <iostream>

using namespace std;
int main() {
  int i, j, k = 0, m = 1;
  for (i = 1; i <= 21; i++) {
    i <= 11 ? k++ : k--;
    m = k - 1;
    for (j = 1; j <= 21; j++) {
      if (j >= 12 - k && j <= 10 + k) {
        if (j < 11) {
          cout << m++ % 10 << " ";
        } else {
          cout << m-- % 10 << " ";
        }
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
}
