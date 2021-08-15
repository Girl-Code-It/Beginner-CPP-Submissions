#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, loc;
  printf("Enter the no of element : ");
  scanf("%d", &n);
  int *a = (int *)malloc(n * sizeof(int));

  printf("Enter the elements : ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  printf("Enter the location from where you want to delete the element: ");
  scanf("%d", &loc);
  for (int i = loc - 1; i < n; i++)
    a[i] = a[i + 1];

  printf("New array is : ");
  for (int i = 0; i < n; i++)
    printf("%d ", a[i]);

  free(a);
  return 0;
}