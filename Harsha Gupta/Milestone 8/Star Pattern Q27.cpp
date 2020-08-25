#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
      for (int j = 0; j <= 3; j++) {
        if (j >= 0 && j <= i - 1) {
          if (j > 0) {
            cout << (char)(64 + i - j);
          } else {
            cout << (char)(64 + i);
          }
        } else {
          cout << " ";
        }
      }
      cout << "\n";
    }
    return 0;
}
