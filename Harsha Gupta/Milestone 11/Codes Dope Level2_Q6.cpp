#include<iostream>
using namespace std;

void print(int a[][4],int r, int c) {
  cout<<"\nElements of array are:\n ";	
  for (size_t i = 0; i < r; i++) {
    for (size_t j = 0; j < c; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {

  int r, c = 0;
  cout<<"\nEnter the no. of rows and columns of array: ";
  cin >> r >> c;
  int arr[r][4];
  cout<<"\nEnter the elements of array: ";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> arr[i][j];
    }
  }
  print(arr,r,c); 
  return 0;
}
