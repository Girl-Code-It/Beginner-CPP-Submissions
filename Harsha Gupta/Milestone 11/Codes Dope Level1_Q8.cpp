#include<iostream>
using namespace std;

int main() {
  int n, flag;
  cout << "\nEnter the size of array:";
  cin >> n;
  int a[n];
  int b[n];
  cout << "\nEnter the elements of array:";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[n - i - 1] = a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i])
      flag = 1;
    else
      flag = 0;
  }
  if (flag == 1)
    cout << "\nArray is same.";
  else if (flag == 0)
    cout << "\nArray isn't same.";

  return 0;
}
