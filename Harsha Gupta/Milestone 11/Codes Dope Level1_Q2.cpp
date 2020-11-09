#include<iostream>
using namespace std;

int search(int a[], int no) {
  for (int i = 0; i < 10; i++) {
    if (a[i] == no) {
      return i;
      break;
    }
  }
  return -1;
}

int main() {
  int ans, no;
  int a[10];
  cout << "\nEnter 10 numbers:";
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  cout << "\nEnter the number to search:";
  cin >> no;
  ans = search(a, no);
  if (ans == -1)
    cout << "\nElement not found";
  else
    cout << "\nElement found at position " << ans + 1;
  return 0;
}
