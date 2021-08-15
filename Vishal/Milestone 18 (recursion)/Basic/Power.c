#include <stdio.h>

int power(int base, int exp)
{
  if (exp == 0)
    return 1;

  if (exp & 1)
    return base * power(base, exp - 1);
  else
  {
    int y = power(base, exp / 2);
    return y * y;
  }
}
int main()
{
  int b, e;
  printf("Input the base value : ");
  scanf("%d", &b);

  printf("Input the exponent value : ");
  scanf("%d", &e);

  printf("The value of %d to the power %d\n%d\n", b, e, power(b, e));
  return 0;
}
