#include <stdio.h>

/*
A Number is Sparse Number if there are 
No two adjacent 1's in its binary form.
For example : 2,5,10,..
*/

int SparseNumber(unsigned int n)
{
  int Bin[32] = {0}, i = 0;

  while (n)
  {
    Bin[i] = n & 1;
    i++;
    n >>= 1;
  }

  i++;

  int Last = 0;
  for (int j = 1; j < i; j++)
  {
    if (Bin[j] == 1 && Bin[j - 1] == 1 && Bin[j + 1] != 1)
    {
      Bin[j + 1] = 1;

      for (int k = j; k >= 0; k--)
        Bin[k] = 0;

      Last = j + 1;
    }
  }

  int ans = 0;

  for (int k = 0; k < i; k++)
    ans += Bin[k] * (1 << k);

  return ans;
}
int main()
{
  unsigned int n;
  printf("Find Next Sparse Number\n\n");
  printf("Enter the Number : ");
  scanf("%u", &n);

  printf("\nNext Sparse Number : %u\n", SparseNumber(n));

  return 0;
}
