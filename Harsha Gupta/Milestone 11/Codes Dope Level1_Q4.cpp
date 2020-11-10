#include<iostream>
using namespace std;

int main() {
  int a[10];
  int b[10];
  cout<<"\nEnter 10 numbers:";
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
    b[9-i]=a[i];
  }
  cout<<"\n\nThe reversed array is:\n";
  for (int i = 0; i < 10; i++) {
    cout << b[i]<<" ";
  }
  return 0;
}

