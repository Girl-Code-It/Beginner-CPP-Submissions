  #include<iostream>

  using namespace std;
  int main() {
    for (int i = 1; i <= 4; i++) {
      for (int j = 1; j <= 8; j++) {
        if (j >= 5 - i && j <= 9 - i) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
      cout << "\n";
    }
    return 0;
  }
