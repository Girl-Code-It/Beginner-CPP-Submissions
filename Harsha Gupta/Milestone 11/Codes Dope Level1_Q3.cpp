#include<iostream>

using namespace std;

int main() {
  int z[20];
  int pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
   cout << "\nEnter 20 numbers:";
  for (int i = 0; i < 20; i++) {
    cin >> z[i];

    if (z[i] > 0)
      pos++;
    else if (z[i] < 0)
      neg++;
    else
      zero++;
    if (z[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  cout << "Positive Numbers: " << pos << "\nNegative Numbers: " << neg << "\nZeros: " << zero << "\nOdd Numbers: " << odd << "\nEven Numbers: " << even << "\n";
  return 0;
}
