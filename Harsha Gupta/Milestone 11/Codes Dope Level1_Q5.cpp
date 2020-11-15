#include<iostream>
using namespace std;

int main() {
  int sum = 0, prod = 1, n;
  cout << "\nEnter the size of array:";
  cin >> n;
  int a[n];
  cout << "\nEnter the numbers:";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    prod *= a[i];
  }
  cout << "\nSum: " << sum << "\nProduct: " << prod;
  return 0;
}
