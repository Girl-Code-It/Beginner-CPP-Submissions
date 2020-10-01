#include<iostream>

using namespace std;

int main() {
  int i, j;
  for (i = 1; i <= 5; i++) {
    for (j = 1; j <= 9; j++) {
      if (j >= 6 - i && j <= 4 + i) {
        if (i % 2 != 0) {
          if (j % 2 != 0)
            cout << "*";
          if(j%2==0)
            cout << " ";
        }
        if (i % 2 == 0) {
          if (j % 2 == 0)
            cout << "*";
          if(j%2!=0)
            cout << " ";
        }
      }
      else
      {
      	cout<<" ";
	  }
    }
    cout << endl;
  }
  return 0;
}
