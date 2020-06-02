#include<stdio.h>

//check k'th bit is set or unset
int main()
{
   unsigned int n,k;
  printf("Enter the Number : ");
  scanf("%u",&n);
  printf("Bit that Has to check : ");
  scanf("%u",&k);

   //(1 << k-1) give a no. whose all bit is 0 except K'th bit

  unsigned int ans = n & (1 << (k-1));

  ans = (ans > 0) ? 1 : 0;
  printf("%u'th bit of %u is %u.\n",k,n,ans);

   return 0;
}