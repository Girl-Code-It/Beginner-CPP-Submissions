#include <stdio.h>

void main()
{
  int n, a[50], b[50], c, loc;
  printf("Enter the no of element : ");
  scanf("%d", &n);

  printf("Enter the elements : ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter the no that u want to insert in an array : ");
  scanf("%d", &c);
  printf("Enter the location : ");
  scanf("%d", &loc);
  for (int i = 0; i < loc; i++)
    b[i] = a[i];

  b[loc] = c;

  for (int i = loc; i < n; i++)
    b[i + 1] = a[i];

  printf("New array is : ");
  for (int i = 0; i < n + 1; i++)
    printf("%d ", b[i]);
}