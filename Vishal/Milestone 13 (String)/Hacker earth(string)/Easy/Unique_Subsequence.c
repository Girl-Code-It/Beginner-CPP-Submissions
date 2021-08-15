#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int t, n, count, l;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);
    char *a = (char *)malloc((n + 2) * sizeof(char));
    scanf("%s", a);
    l = strlen(a);
    count = 0;

    for (int i = 0; i < l - 1; i++)
    {
      if (a[i] == a[i + 1])
        count++;
    }
    printf("%d\n", l - count);
    free(a);
  }
  return 0;
}