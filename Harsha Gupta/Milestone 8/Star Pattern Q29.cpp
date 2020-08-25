  #include<iostream>

  using namespace std;
  int main() {
    int h = 1, k = 1, l;
    for (int i = 1; i <= 5; i++) {
      for (int j = 1; j <= 5; j++) {
        if (j >= 6 - i && j <= 5) {
          cout << (char)(64 + k);
          k--;
        } else {
          cout << " ";
        }
      }
      l += 2;
      k += l;
      cout << "\n";
    }
    return 0;
  }
