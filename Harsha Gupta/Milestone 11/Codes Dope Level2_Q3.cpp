#include<iostream>
using namespace std;

int main() {
  int A[10][10], i, j, m, n, x = 0, y = 0;
  cout << "Enter the number of rows and columns : ";
  cin >> m >> n;
  cout << "Enter the matrix elements : ";
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++)
      cin >> A[i][j];
  }
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (A[i][j] != A[j][i])
        x = 1;
      else if (A[i][j] == -A[j][i])
        y = 1;
    }
  }
  if (x == 0)
    cout << "The matrix is symmetric.\n ";
  else if (y == 1)
    cout << "The matrix is skew symmetric.\n ";
  else
    cout << "It is neither symmetric nor skew-symmetric.\n ";
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++)
      cout << A[i][j] << " ";
    cout << "\n ";
  }
  return 0;
}
