#include<stdio.h>
using namespace std;

int main() {
  int a[3][3], b[3][3], c[3][3], i, j, k;
  int sum = 0;

  printf("\nEnter First Matrix : ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", & a[i][j]);
    }
  }

  printf("\nEnter Second Matrix: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", & b[i][j]);
    }
  }

  printf("\nThe First Matrix is:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d ", a[i][j]);
    }
    printf("\n");
  }

  printf("\nThe Second Matrix is:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d ", b[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i <= 2; i++) {
    for (j = 0; j <= 2; j++) {
      sum = 0;
      for (k = 0; k <= 2; k++) {
        sum = sum + a[i][k] * b[k][j];
      }
      c[i][j] = sum;
    }
  }

  printf("\nMultiplication Of Two Matrices : \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf(" %d ", c[i][j]);
    }
    printf("\n");
  }

  return (0);
}
