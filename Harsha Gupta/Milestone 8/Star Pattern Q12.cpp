#include<iostream>

using namespace std;

int main() {
  int v, k = 2;
  for (int i = 1; i <= 7; i++) {
    for (int j = 1; j <= 7; j++) {
      if(j>=i && j<=8-i)
        cout<<"*";
      else
        cout<<" ";
    }
    cout << "\n";
  }
  return 0;
}
